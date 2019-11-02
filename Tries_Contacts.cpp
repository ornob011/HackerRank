#include<bits/stdc++.h>
using namespace std;

struct Node
{
	Node *next[26];
	bool leaf;
	int total;

	Node()
	{
		for(int i=0; i<26; i++)
			next[i]=NULL;
		leaf=false;
		total=0;
	}
};

Node *head=new Node();

void add(string s)
{
	int length=s.size(), i=0;

	Node *cur=head;

	while(i<length)
	{
		int index=s[i]-'a';

		if(cur->next[index]==NULL)
		{
			Node *temp=new Node();
			cur->next[index]=temp;
		}
		cur=cur->next[index];
		cur->total=cur->total+1;
		i++;
	}
	cur->leaf=true;
}

int find(string s)
{
	int length=s.size(), i=0;

	Node *cur=head;

	while(i<length)
	{
		int index=s[i]-'a';

		if(cur->next[index]==NULL)
			return 0;

		cur=cur->next[index];
		i++;
	}
	if(cur==NULL)
		return 0;

	return cur->total;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n;
	string op, contact;

	cin>>n;

	while(n--)
	{
		cin>>op>>contact;

		if(op=="add")
			add(contact);
		else if(op=="find")
			cout<<find(contact)<<endl;
	}
	return 0;
}