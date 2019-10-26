#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(vector<ll>&v, ll size, ll mod)
{	
	ll x, prefix=0, maxim=0, i;

	set<ll>s;
	s.insert(0);

	for(i=0; i<size; i++)
	{
		prefix=(prefix+v[i])%mod;

		maxim=max(maxim, prefix);

		auto it=s.lower_bound(prefix+1);

		if(it!=s.end())
			maxim=max(maxim, prefix-(*it)+mod);

		s.insert(prefix);
	}
	return maxim;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	ll t, res, size, i;

	ll mod;

	cin>>t;

	while(t--)
	{
		cin>>size>>mod;

		vector<ll>v(size);
		for(i=0; i<size; i++)
			cin>>v[i];

		res=solve(v, size, mod);

		cout<<res<<endl;

	}
	return 0;
}