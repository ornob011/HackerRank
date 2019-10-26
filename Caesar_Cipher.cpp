#include<bits/stdc++.h>
using namespace std;

string solve(string str, int size, int k)
{
	k=k%26;

	int i;

	for(i=0; i<size; i++)
	{
		if(isalpha(str[i]))
		{
			if(isupper(str[i]))
			{
				if(str[i]+k>'Z')
					str[i]=str[i]-26;
			}
			else
			{
				if(str[i]+k>'z')
					str[i]=str[i]-26;
			}
			str[i]=str[i]+k;
		}
	}
	return str;
}


int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size, k;
	string str, res;

	cin>>size>>str>>k;

	res=solve(str, size, k);

	cout<<res<<endl;

	return 0;
}