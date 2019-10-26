#include<bits/stdc++.h>
using namespace std;

bool getPalindromicString(string str)
{
	map<char, int>hmap;

	int i, odd=0;

	char j;

	for(i=0; i<str.size(); i++)
		hmap[str[i]]++;

	for(j='a'; j<='z'; j++)
	{
		if(hmap[j]%2)
			odd++;
	}
	if(odd>1)
		return false;
	return true;
}

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	string str;
	bool flag;

	cin>>str;

	flag=getPalindromicString(str);

	if(flag)
		cout<<"YES"<<endl;

	else
		cout<<"NO"<<endl;

	return 0;
}