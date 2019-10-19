#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isKaprekar(ll num)
{
	if(num==1)
		return true;

	ll sq, sum, count_digits=0, i, right, left, eq_parts;
	sq=num*num;

	while(sq)
	{
		count_digits++;
		sq=sq/10;
	}
	sq=num*num;

	count_digits=ceil((double)count_digits/2);

	left=sq/pow(10, count_digits);

	right=sq-left*pow(10, count_digits);

	return left+right==num;
}
int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	ll i, p, q, count=0;

	cin>>p>>q;

	for(i=p; i<=q; i++)
	{
		if(isKaprekar(i))
		{
			count++;
			cout<<i<<" ";
		}
	}
	if(count==0)
		cout<<"INVALID RANGE"<<endl;

	return 0;
}