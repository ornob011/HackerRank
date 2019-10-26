#include<bits/stdc++.h>
using namespace std;

int getMin(vector<int>arr)
{
	sort(arr.begin(), arr.end());

	int i, prev, ans;

	i=0, ans=1;
	prev=arr[0];

	for(i=0; i<arr.size(); i++)
	{
		if(arr[i]>prev+4)
		{
			prev=arr[i];
			ans++;
		}
	}
	return ans;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size, i;
	cin>>size;

	vector<int>arr(size);

	for(i=0; i<size; i++)
		cin>>arr[i];

	cout<<getMin(arr)<<endl;


	return 0;
}