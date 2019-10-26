#include<bits/stdc++.h>
using namespace std;

bool solve(string a, string b, int k)
{
	int common=0, vmin, minLength, length;

	minLength=min(a.length(), b.length());
	

	while(common<minLength && a[common]==b[common])
		common++;

	length=a.length()+b.length();
	
	if(k%2 == length%2)
		vmin=length-2*common;

	else
		vmin=length+1;

	if (k < vmin)
        return false;

    return true;
}


int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string a, b;
	int k;

	cin>>a>>b>>k;

	if(solve(a, b, k))
		cout<<"Yes"<<endl;

	else
		cout<<"No"<<endl;
	return 0;
}