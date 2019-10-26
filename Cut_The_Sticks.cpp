#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size, i, min;
	cin>>size;

	vector<int> v(size);

	for(i=0; i<size; i++)
		cin>>v[i];

	while(v.size()>0)
	{
		cout<<v.size()<<endl;

		min=*min_element(v.begin(), v.end());

		for(vector<int>::iterator it=v.begin(); it!=v.end(); )
		{
			if(*it==min)
				v.erase(it);
			else
				it++;
		}
	}

	return 0;
}