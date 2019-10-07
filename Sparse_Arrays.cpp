#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	map<string, int>m;

	int inputsize, querysize, i;
	string str;

	cin>>inputsize;
	for(i=0; i<inputsize; i++)
	{
		cin>>str;

		m[str]++;
	}

	cin>>querysize;

	for(i=0; i<querysize; i++)
	{
		cin>>str;

		cout<<m[str]<<endl;
	}

	
	return 0;
}