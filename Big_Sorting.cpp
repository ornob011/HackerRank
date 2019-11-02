#include<bits/stdc++.h>
using namespace std;

bool cmp(string x, string y)
{
	if(x.length()!=y.length())
		return x.length()<y.length();

	else
		return x<y;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, i;
	cin>>n;

	vector<string>arr(n);

	for(i=0; i<n; i++)
		cin>>arr[i];

	sort(arr.begin(), arr.end(), cmp);

	for(i=0; i<n; i++)
		cout<<arr[i]<<endl;


	return 0;
}