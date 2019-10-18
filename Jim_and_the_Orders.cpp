 
#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int time, id, d, n, i;
	cin>>n;

	vector<pair<int, int>>order;
	for(i=0; i<n; i++)
	{
		
		cin>>id>>d;
		time=id+d;

		order.push_back({time, i+1});
	}

	sort(order.begin(), order.end());

	for(i=0; i<n; i++)
		cout<<order[i].second<<" ";
	return 0;
}