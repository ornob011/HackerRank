#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int t, i, len, temp, count;
	string str;
	unsigned long n;

	cin>>t;

	while(t--)
	{
		count=0;
		cin>>n;

		str=to_string(n);
		len=str.length();

		for(i=0; i<len; i++)
		{
			if(str[i]!='0')
			{
				temp=str[i]-'0';
				if(n%temp==0)
					count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
} 
