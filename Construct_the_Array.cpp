#include<bits/stdc++.h>
using namespace std;

const int MOD=1000000007;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int n, k, x, i;

	cin>>n>>k>>x;

	vector<long long>a(n), b(n);

	if(x==1)
	{
		a[0]=1;
		b[0]=0;
	}
	else
	{
		a[0]=0;
		b[0]=1;
	}

	for(i=1; i<n; i++)
	{
		a[i]=b[i-1]%MOD;
		b[i]=(a[i-1]*(k-1)+b[i-1]*(k-2))%MOD;
	}

	cout<<a[n-1]<<endl;

	return 0;
}