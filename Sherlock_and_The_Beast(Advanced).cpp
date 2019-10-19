#include<bits/stdc++.h>
using namespace std;

void getcombs(vector<pair<int, int>>&combs, int target)
{
	int num_3=0,  num_5=0;

	while(1)
	{
		num_5=target-num_3;

		if(num_5<0)
			break;

		if(num_5%3==0)
			combs.push_back(make_pair(num_5, num_3));

		num_3=num_3+5;
	}
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, target, i;

	cin>>t;

	while(t--)
	{
		cin>>target;

		vector<pair<int, int>>combs;

		getcombs(combs, target);

		if(combs.size()>0)
		{
			pair<int, int> maximum=*max_element(combs.begin(), combs.end());

			for(i=0; i<maximum.first; i++)
				cout<<5;

			for(i=0; i<maximum.second; i++)
				cout<<3;

		}
		else
			cout<<-1;

		cout<<endl;

	}
	return 0;
}