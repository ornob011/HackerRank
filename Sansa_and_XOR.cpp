#include<bits/stdc++.h>
using namespace std;

int xorSolve(vector<int>&v, int size)
{
	int i, res=0;
	if(size & 1)
	{
		for(i=0; i<size; i=i+2)
			res=res^v[i];
	}
	else
		return 0;

	return res;
}
int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, n, i;
	cin>>t;

	while(t--)
	{
		cin>>n;
		vector<int>v(n);

		for(i=0; i<n; i++)
			cin>>v[i];

		
		cout<<xorSolve(v, n)<<endl;		
	}
	return 0;
}