#include<bits/stdc++.h>
using namespace std;
 
long long countOccurrence(string str, long long n)
{
	long long cnt=0, i, str_size, repetition;

	str_size=str.size();

	for(i=0; i<str_size; i++)
	{
		if(str[i]=='a')
			cnt++;
	}

	repetition=n/str_size;
	cnt=cnt*repetition;

	for(i=0; i<n%str_size; i++)
	{
		if(str[i]=='a')
			cnt++;
	}
	return cnt;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string str;
	long long n;
	
	cin>>str>>n;

	cout<<countOccurrence(str, n)<<endl;

	return 0;
}