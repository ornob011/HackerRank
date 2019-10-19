#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, i, j;
	cin>>n;

	vector<string>grid(n);

	for(i=0; i<n; i++)
		cin>>grid[i];

	vector<int>row={-1, 0, 1, 0};
	vector<int>col={0, 1, 0, -1};

	for(i=1; i<n-1; i++)
	{
		for(j=1; j<n-1; j++)
		{
			if(grid[i][j]>grid[i+row[0]][j+col[0]] && grid[i][j]>grid[i+row[1]][j+col[1]] && grid[i][j]>grid[i+row[2]][j+col[2]] && grid[i][j]>grid[i+row[3]][j+col[3]])
				grid[i][j]='X';
		}
	}

	for(i=0; i<n; i++)
		cout<<grid[i]<<endl;

	return 0;
}