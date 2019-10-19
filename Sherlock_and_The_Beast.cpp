#include<bits/stdc++.h>
using namespace std;

string beast(int target)
{
	int three=0, five=0, digits;

	digits=target;

	while(digits>0)
	{
		if(digits%3==0)
		{
			five=digits;
			break;
		}
		digits=digits-5;
	}
	three=target-digits;

	if(digits<0 || three%5!=0)
		return "-1";

	string res;

	while(five>0)
	{
		res.push_back('5');
		five--;
	}
	while(three>0)
	{
		res.push_back('3');
		three--;
	}

	return res;
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, target;

	cin>>t;

	while(t--)
	{
		cin>>target;

		string res=beast(target);

		cout<<res<<endl;
	}
	return 0;
}