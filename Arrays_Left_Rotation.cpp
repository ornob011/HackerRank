#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int size, d, newindex, i;

	cin>>size>>d;

	int arr[size], output[size];

	for(i=0; i<size; i++)
		cin>>arr[i];

	for(i=0; i<size; i++)
	{
		newindex=(i+size-d)%size;
		output[newindex]=arr[i];
	}

	for(i=0; i<size; i++)
		cout<<output[i]<<" ";

	cout<<endl;

	return 0;
}