#include<bits/stdc++.h>
using namespace std;

void MinimumDistances(int arr[], int size)
{
	map<int, int>hmap;

	int i, minimum=INT_MAX, currentIndex, previousIndex;

	for(i=0; i<size; i++)
	{
		if(hmap.count(arr[i])>0)
		{
			currentIndex=i;
			previousIndex=hmap[arr[i]];

			minimum=min(minimum, currentIndex-previousIndex);
		}
		hmap.insert(make_pair(arr[i], i));
	}

	if(minimum==INT_MAX)
		cout<<-1<<endl;
	else
		cout<<minimum<<endl;
}
int main()
{
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size;
	cin>>size;
	int arr[size];

	for(int i=0; i<size; i++)
		cin>>arr[i];
	
	MinimumDistances(arr, size);
	return 0;
}









