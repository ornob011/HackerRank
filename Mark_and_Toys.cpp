#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size, i, k, x, sum=0, count=0;
	vector<int>v;

	cin>>size>>k;

	for(i=0; i<size; i++)
	{
		cin>>x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	i=0;
	while(v[i]+sum<=k)
	{
		sum=v[i]+sum;
		count++;
		i++;
	}

	cout<<count<<endl;
	return 0;
}