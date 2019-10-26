#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, k, i, j, ans=0;
	cin>>n>>k;

	vector<int>C(n), t(n, 0);

	for(i=0; i<n; i++)
		cin>>C[i];

	j=0;
	sort(C.begin(), C.end());
	
	for(i=n-1; i>=0; i--)
	{
		ans=ans+(t[j]+1)*C[i];
		t[j]++;
		j=(j+1)%k;
	}
	cout<<ans<<endl;


	return 0;
}