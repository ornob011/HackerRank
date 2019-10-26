#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	map<int, int>A;
	int n, m, i, x;

	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>x;
		A[x]--;
	}

	cin>>m;
	for(i=0; i<m; i++)
	{
		cin>>x;
		A[x]++;
	}

	for(i=0; i<10000; i++)
	{
		if(A[i]!=0)
		{
			cout<<i<<" ";
		}	
	}
	cout<<endl;

	
	return 0;
		
}