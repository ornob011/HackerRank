#include<bits/stdc++.h>
using namespace std;

void quicksort(vector<int>&arr, int len)
{
	int i=0, j=0;
	int pivot=arr[0];

	while(j<len)
	{
		if(pivot<arr[j])
		{
			swap(arr[j], arr[--len]);
		}
		else if(pivot>arr[j])
			swap(arr[i++], arr[j++]);
		else
			j++;
	}

	for(auto it=arr.begin(); it!=arr.end(); it++)
		cout<<*it<<" ";
}

int main()
{   
 //    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n;
	cin>>n;

	vector<int>arr(n);

	for(int i=0; i<n; i++)
		cin>>arr[i];

	quicksort(arr, n);

	return 0;
}