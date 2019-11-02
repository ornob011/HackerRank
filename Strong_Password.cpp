#include<bits/stdc++.h>
using namespace std;

int minimumNumber(string str)
{
	int len=str.size(), i, ans;
	bool small=false, caps=false, numeric=false, special=false;

	string specials="!@#$%^&*()-+";

	for(i=0; i<len; i++)
	{
		if(str[i]>='a' && str[i]<='z')
			small=true;

		if(str[i]>='A' && str[i]<='Z')
			caps=true;

		if(str[i]>='0' && str[i]<='9')
			numeric=true;

		if(specials.find(str[i])!=string::npos)
			special=true;
	}

	ans=0;
	if(!small)
		ans++;

	if(!caps)
		ans++;

	if(!numeric)
		ans++;

	if(!special)
		ans++;

	if(len+ans<6)
		ans=ans+6-(len+ans);

	return ans;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size;
	string str;
	cin>>size;
	cin>>str;

	cout<<minimumNumber(str)<<endl;

	return 0;
}