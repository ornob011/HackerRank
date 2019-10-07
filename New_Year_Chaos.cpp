#include<bits/stdc++.h>
using namespace std;


void swap(int arr[], int a, int b)
{
	arr[a]=arr[a]^arr[b];
	arr[b]=arr[a]^arr[b];
	arr[a]=arr[a]^arr[b];
}

void minimumBribes(int arr[], int size)
{
	int i, swapcount=0;

	for(i=size-1; i>=0; i--)
	{
		if(arr[i]!=i+1)
		{
			if((i>=0) && (arr[i-1]==i+1))
			{
				swapcount++;
				swap(arr, i, i-1);
			}
			else if((i>=0) && (arr[i-2]==i+1))
			{
				swapcount=swapcount+2;
				swap(arr, i-2, i-1);
				swap(arr, i-1, i);
			}
			else
			{
				cout<<"Too chaotic"<<endl;
				return;
			}
		}
	}
	cout<<swapcount<<endl;
}

int main()
{
	// freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	// freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int size, t, i;
	cin>>t;
	while(t--)
	{
		cin>>size;

		int arr[size];

		for(i=0; i<size; i++)
			cin>>arr[i];

		minimumBribes(arr, size);

	}
	
	return 0;
}
