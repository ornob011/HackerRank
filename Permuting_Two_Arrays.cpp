#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, n, k, i;

	bool flag;

	cin>>t;

	while(t--)
	{
		cin>>n>>k;

		vector<int>a(n), b(n);

		for(i=0; i<n; i++)
			cin>>a[i];

		for(i=0; i<n; i++)
			cin>>b[i];

		sort(a.begin(), a.end());

		sort(b.begin(),b.end(), greater<int>());

		flag=true;

		for(i=0; i<n; i++)
		{
			if(a[i]+b[i]<k)
			{
				flag=false;
				break;
			}
		}
		if(flag)
			cout<<"YES"<<endl;

		else
			cout<<"NO"<<endl;

	}
	return 0;
}