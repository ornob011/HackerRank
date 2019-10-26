#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	

	int size, target, i, x;
	cin>>size>>target;

	set<int>s;
	vector<int>v(size);

	for(i=0; i<size; i++)
	{
		cin>>v[i];
		s.insert(v[i]);
	}

	int sum=0;

	for(i=0; i<size; i++)
	{
		if(s.count(v[i]+target))
			sum++;
	}

	cout<<sum<<endl;
	return 0;
}