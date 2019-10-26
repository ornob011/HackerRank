#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	long long n, i, ans=0;
	cin>>n;

	vector<long long>rating(n);

	vector<long long>result(n, 1);

	for(i=0; i<n; i++)
		cin>>rating[i];

	for(i=1; i<n; i++)
	{
		if(rating[i]>rating[i-1])
			result[i]=result[i]+result[i-1];
	}

	for(i=n-2; i>=0; i--)
	{
		if(rating[i]>rating[i+1] && result[i]<result[i+1]+1)
			result[i]=result[i+1]+1;
	}
	for(i=0; i<n; i++)
		ans=ans+result[i];

	cout<<ans<<endl;

	return 0;
}