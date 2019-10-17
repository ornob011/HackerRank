#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, result=0, x;
	cin>>t;
	while(t--)
	{
		cin>>x;

		result=result^x;
	}
	cout<<result<<endl;
	return 0;
} 
