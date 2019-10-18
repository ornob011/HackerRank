#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, k, i, temp, unfairness=INT_MAX;
	cin>>n>>k;

	vector<int>v(n);

	for(i=0; i<n; i++)
		cin>>v[i];

	sort(v.begin(), v.end());

	for(i=0; i<=n-k; i++)
	{
		temp=v[i+k-1]-v[i];

		if(temp<unfairness)
			unfairness=temp;
	}

	cout<<unfairness<<endl;
	
	return 0;
} 
