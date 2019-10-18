#include<bits/stdc++.h>
using namespace std;

int height(int n)
{
	int res=1, i;

	for(i=1; i<=n; i++)
	{
		if(i&1)
			res=res*2;

		else
			res++;
	}
	return res;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, n;

	cin>>t;

	while(t--)
	{
		cin>>n;
		cout<<height(n)<<endl;
	}
	return 0;
}