#include<bits/stdc++.h>
using namespace std;

int countingvalleys(string str, int length)
{
	int altitude=0, valleys=0, i;

	for(i=0; i<length; i++)
	{
		if(str[i]=='U')
		{
			altitude++;
			if(altitude==0)
				valleys++;
		}
		else
			altitude--;
	}
	return valleys;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int length, res;
	string str;

	cin>>length>>str;

	res=countingvalleys(str, length);

	cout<<res<<endl;
	
	return 0;
}