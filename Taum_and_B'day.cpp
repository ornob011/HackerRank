#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	unsigned long long t, b, w, bc, wc, z;
	cin>>t;

	while(t--)
	{
		cin>>b>>w;
		cin>>bc>>wc>>z;

		cout<<(b*min(bc, wc+z))+(w*min(wc, bc+z))<<endl;
	}


	return 0;
}