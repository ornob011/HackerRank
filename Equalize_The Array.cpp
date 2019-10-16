 
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size, i, x, maxn=0;
	cin>>size;

	std::vector<int> v(101, 0);

	for(i=0; i<size; i++)
	{
		cin>>x;

		v[x]++;
	}

	for(std::vector<int>::iterator it=v.begin(); it!=v.end(); it++)
	{
		if(*it>maxn)
			maxn=*it;
	}

	cout<<size-maxn<<endl;
	return 0;
}