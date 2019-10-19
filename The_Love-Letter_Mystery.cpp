#include<bits/stdc++.h>
using namespace std;

int solve(string str)
{
	int len=str.length();
	int mid=len/2;

	int i, dif, ans=0;

	for(i=0; i<mid; i++)
	{
		dif=abs(str[i]-str[len-i-1]);
		ans=ans+dif;
	}
	return ans;
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t;
	string str;

	cin>>t;

	while(t--)
	{
		cin>>str;

		cout<<solve(str)<<endl;
	}
	return 0;
}