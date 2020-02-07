#include<bits/stdc++.h>
using namespace std;

string abbreviation(string a, string b)
{
	int n=a.size();
	int m=b.size();

	vector<vector<int>>dp(n+1, vector<int>(m+1));

	dp[0][0]=1;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=m; j++)
		{
			if(!dp[i][j])
				continue;

			if(j<m && toupper(a[i])==b[j])
				dp[i+1][j+1]=1;

			if(!isupper(a[i]))
				dp[i+1][j]=1;
		}
	}
	return dp[n][m] ? "YES" : "NO";
}

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string a, b;
	int t;
	
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<abbreviation(a, b)<<endl;
	}


	return 0;
}