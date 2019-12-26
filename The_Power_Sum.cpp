#include<bits/stdc++.h>
using namespace std;

int power_p(int x, int n)
{
	if(n==0)
		return 1;

	int temp=power_p(x, n/2);

	if(n&1)
		return x*temp*temp;

	return temp*temp;
}

int findways(int x, int n, int num=1)
{
	int val=x-power_p(num, n);

	if(val==0)
		return 1;

	if(val<0)
		return 0;

	return findways(x, n, num+1)+findways(val, n, num+1);
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int x, n;
	cin>>x>>n;

	cout<<findways(x, n)<<endl;

		
	return 0;
}