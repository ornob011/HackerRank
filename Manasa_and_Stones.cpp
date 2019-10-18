#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int t, n, a, b, i, j;
	cin>>t;

	set<int>s;

	while(t--)
	{
		s.clear();

		cin>>n>>a>>b;

		for(i=n-1, j=0; i>=0, j<n; i--, j++)
			s.insert(a*i+b*j);


		for(set<int>::iterator it=s.begin(); it!=s.end(); it++)
			cout<<*it<<" ";

		cout<<endl;

	}
	
	return 0;
}