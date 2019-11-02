#include<bits/stdc++.h>
using namespace std;

int contribution_height(int current, int previous)
{
	return abs(current-previous);
}

int surface(vector<vector<int>>&arr, int row, int col)
{
	int i, j;

	int ans=0, up, left;

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			up=0;
			left=0;

			if(i>0)
				up=arr[i-1][j];

			if(j>0)
				left=arr[i][j-1];

			ans=ans+contribution_height(arr[i][j], up)+contribution_height(arr[i][j], left);

			if(i==row-1)
				ans=ans+arr[i][j];

			if(j==col-1)
				ans=ans+arr[i][j];
		}
	}

	ans=ans+row*col*2;

	return ans;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int row, col, i, j;
	cin>>row>>col;

	vector<vector<int> >arr(row, vector<int>(col));

	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
			cin>>arr[i][j];
	}

	cout<<surface(arr, row, col)<<endl;

	return 0;
}