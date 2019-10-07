#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int size, index, i;
	cin>>size;

	
	int result=INT_MIN;

	vector<int>frequency(101, 0);

	for(i=0; i<size; i++)
	{
		cin>>index;
		frequency[index]++;
	}
	for(i=1; i<=frequency.size(); i++)
		result=max(result, frequency[i]+frequency[i-1]);

	cout<<result<<endl;
	
	return 0;
}

