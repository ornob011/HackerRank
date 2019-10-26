#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	ll i, size, t, x, count, k;
	map<ll, ll>hmap;

	cin>>t;

	while(t--)
	{
		cin>>size;
		count=0;

		for(i=0; i<size; i++)
		{
			cin>>x;

			hmap[x]++;
		}

		for(map<ll, ll>::iterator it=hmap.begin(); it!=hmap.end(); it++)
			count=count+(it->second)*(it->second-1);

		cout<<count<<endl;

		hmap.clear();
	}
	return 0;
}