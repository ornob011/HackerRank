#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int n, i;
	cin>>n;
	vector <int > v(n);

	for(i=0;i<n;i++)
		cin>>v[i];

	sort(v.begin(),v.end());

	int min=INT_MAX;
	int id=0;
	for(int i=1;i<n;i++)
	{
		if(abs(v[i]-v[i-1])<min)
		{
			min=abs(v[i]-v[i-1]); 
			id=i-1; 
		}
	}
	for(i=id;i<n-1;i++)
	{
		if(abs(v[i+1]-v[i])==min)
			cout<<v[i]<<" "<<v[i+1]<<" ";
	}
	return 0;
}