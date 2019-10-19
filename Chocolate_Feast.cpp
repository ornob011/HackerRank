#include<bits/stdc++.h>
using namespace std;

int solve(int n, int c, int m)
{
	int count, wrapper;

	wrapper=n/c;
	count=wrapper;

	while(wrapper>=m)
	{
		wrapper=wrapper-m;
		count++;
		wrapper++;
	}
	return count;
}


int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, n, c, m, res;

	cin>>t;

	while(t--)
	{
		cin>>n>>c>>m;

		res=solve(n,c,m);

		cout<<res<<endl;
	}
	return 0;
}