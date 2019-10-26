#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, i, count;
	cin>>t;

	string str;

	while(t--)
	{
		count=0;
		cin>>str;

		for(i=0; i<str.size(); i++)
		{
			if(str[i]==str[i+1])
				count++;
		}

		cout<<count<<endl;
	}
	return 0;
}