#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int t, size, k, x, count, i;

	cin>>t;

	while(t--)
	{
		count=0;

		cin>>size>>k;

		for(i=0; i<size; i++)
		{
			cin>>x;

			if(x<=0)
				count++;
		}
		if(count>=k)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	
	return 0;
} 
