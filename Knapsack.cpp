#include <bits/stdc++.h>

using namespace std;

int arr[2001];

int unboundedKnapsack(int k, int n) 
{
	int Memoize[n+1][k+1];

	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			if(i==0 || j==0)
				Memoize[i][j]=0;
			else if(j>=arr[i-1])
				Memoize[i][j]=max(Memoize[i-1][j],arr[i-1]+Memoize[i][j-arr[i-1]]);
			else
				Memoize[i][j]=Memoize[i-1][j];
		}
	}

	return Memoize[n][k];
}

int main()
{
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int t;
	cin>>t;

	while(t--)
	{
		int n,sum;
		cin>>n>>sum;

		for(int i=0;i<n;i++)
			cin>>arr[i];

		cout<<unboundedKnapsack(sum,n)<<endl;

	}
	return 0;
}