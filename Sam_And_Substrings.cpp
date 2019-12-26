#include<bits/stdc++.h>
using namespace std;

const int mod=1000000007;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string num;
	cin>>num;

	int i, length;
	length=num.size();

	for(i=0; i<length; i++)
		num[i]=num[i]-'0';

	vector<long long>dp(length);

	dp[0]=num[0];

	for(i=1; i<length; i++)
		dp[i]=(10*dp[i-1]+num[i]*i+num[i])%mod;
	
	long long ans=0;

	for(i=0; i<length; i++)
		ans=(ans+dp[i])%mod;

	cout<<ans<<endl;


	return 0;
}