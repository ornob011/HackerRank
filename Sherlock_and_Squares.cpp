#include<bits/stdc++.h>
using namespace std;

int solve(int a, int b)
{
	int sqrt_a=sqrt(a);
	int sqrt_b=sqrt(b);

	int count=0, i, k;

	for(i=sqrt_a; i<=sqrt_b; i++)
	{
		k=i*i;

		if(k>=a && k<=b)
			count++;
	}
	return count;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int s, e, t, result;
	cin>>t;

	while(t--)
	{
		cin>>s>>e;

		result=solve(s, e);

		cout<<result<<endl;
		
	}
	
	return 0;
}