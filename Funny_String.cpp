#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, i;

	bool flag;

	string input, rev;

	cin>>t;

	while(t--)
	{
		cin>>input;
		rev=input;

		reverse(rev.begin(), rev.end());

		flag=true;

		for(i=1; i<input.size(); i++)
		{
			if(abs(input[i]-input[i-1])!=abs(rev[i]-rev[i-1]))
			{
				flag=false;
				break;
			}
		}
		if(flag)
			cout<<"Funny"<<endl;

		else
			cout<<"Not Funny"<<endl;
	}
	return 0;
}