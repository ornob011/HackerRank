#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, t, i, entry, exit;

	cin>>n>>t;

	vector<int>arr(n);
	for(i=0; i<n; i++)
		cin>>arr[i];

	while(t--)
	{
		cin>>entry>>exit;

		int ans=INT_MAX;

		for(i=entry; i<=exit; i++)
		{
			if(arr[i]<=ans)
				ans=arr[i];
		}
		cout<<ans<<endl;
	}

	return 0;
}