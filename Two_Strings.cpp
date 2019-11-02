#include<bits/stdc++.h>
using namespace std;

string common(string s1, string s2)
{
	int len=s1.size(), i;

	bool flag=false;
	for(i=0; i<len; i++)
	{
		if(s2.find(s1[i])!=string::npos)
		{
			flag=true;
			break;
		}
	}
	if(flag)
		return "YES";

	else
		return "NO";

}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t;

	cin>>t;

	string s1, s2;

	while(t--)
	{
		cin>>s1>>s2;

		cout<<common(s1, s2)<<endl;
	}
	return 0;
}