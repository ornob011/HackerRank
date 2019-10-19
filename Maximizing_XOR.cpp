#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int l, r, i, j, x, max=0;

	cin>>l>>r;

	for(i=l; i<=r; i++)
	{
		for(j=i; j<=r; j++)
		{
			x=i^j;

			if(x>max)
				max=x;
		}
	}

	cout<<max<<endl;
	return 0;
}