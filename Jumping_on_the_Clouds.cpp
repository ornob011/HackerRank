#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int size, i, currentPosition, lastPosition, jumps;
	cin>>size;

	vector<int>arr(size);

	for(i=0; i<size; i++)
		cin>>arr[i];

	currentPosition=0;
	lastPosition=size-1;

	jumps=0;

	while(currentPosition<lastPosition)
	{
		if(currentPosition+1==lastPosition)
			currentPosition++;

		else if(arr[currentPosition+2]==0)
			currentPosition=currentPosition+2;

		else
			currentPosition++;

		jumps++;
	}

	cout<<jumps<<endl;
	return 0;
}