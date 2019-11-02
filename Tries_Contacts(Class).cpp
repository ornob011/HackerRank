#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	string value;
	int size;

	map<char, Node*>children;
	bool isCompleted;

	Node():value(""), isCompleted(false), children(), size(0)
	{}

	Node(string c):value(c), isCompleted(false), children(), size(0)
	{}
};


class Trie
{
	Node *root;
public:
	Trie() {};

	int find(Node *root, string str);

	Node *insert(Node *root, string str);
};

Node* Trie::insert(Node *root, string str)
{
	auto cur=root;
	int i, length=str.size();

	for(i=0; i<length; i++)
	{
		if(cur->children.find(str[i])!=cur->children.end())
		{
			cur->size++;
			cur=cur->children[str[i]];
		}
		else
		{
			Node *nextNode=new Node(str.substr(0, i+1));
			cur->children[str[i]]=nextNode;
			cur->size++;
			cur=nextNode;
		}
	}
	cur->isCompleted=true;
	return root;
}

int Trie::find(Node *root, string str)
{
	int i, length=str.size();
	auto cur=root;

	for(i=0; i<length; i++)
	{
		if(cur->children.find(str[i])==cur->children.end())
			return 0;

		cur=cur->children[str[i]];
	}
	if(cur->isCompleted)
		return cur->size+1;

	else
		return cur->size;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t;
	string op, str;

	cin>>t;
	Node *root=new Node();

	Trie *contact=new Trie();

	while(t--)
	{
		cin>>op>>str;

		if(op.compare("add")==0)
			root=contact->insert(root, str);

		else if(op.compare("find")==0)
			cout<<contact->find(root, str)<<endl;
	}
	return 0;
}