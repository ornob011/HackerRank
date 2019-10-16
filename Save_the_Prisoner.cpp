#include<bits/stdc++.h>
using namespace std;

int saveThePrisoner(int n, int m, int s)
{
	int r=m%n;
	if((r+s-1)%n==0)
		return n;

	else
		return (r+s-1)%n;
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, prisoners, sweets, start, rem;

	cin>>t;

	while(t--)
	{
		cin>>prisoners>>sweets>>start;

		int result=saveThePrisoner(prisoners, sweets, start);

		cout<<result<<endl;
	}
	return 0;
} 
