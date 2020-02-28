#include<bits/stdc++.h>
using namespace std;

int n;
int graph[3005][3005];

int min_key(int key[], bool mst[])
{
	int min=INT_MAX, min_index;

	for(int i=1; i<=n; i++)
	{
		if(mst[i]==false && min>key[i])
		{
			min=key[i];
			min_index=i;
		}
	}
	return  min_index;
}

int prims(int start)
{
	int key[n+1];
	bool mst[n+1];

	int sum=0;

	for(int i=1; i<=n; i++)
	{
		key[i]=INT_MAX;
		mst[i]=false;
	}
	key[start]=0;

	for(int count=0; count<n; count++)
	{
		int u=min_key(key, mst);
		mst[u]=true;

		sum+=key[u];

		for(int i=1; i<=n; i++)
		{
			if(graph[u][i]>=0 && mst[i]==false && (graph[u][i]<key[i]))
				key[i]=graph[u][i];
		}
	}
	return sum;
}

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int m;
	cin>>n>>m;

	memset(graph, -1, sizeof(graph));

	for(int i=0; i<m; i++)
	{
		int x, y, z;
		cin>>x>>y>>z;
		graph[x][y]=z;
		graph[y][x]=z;
	}
	int start;
	cin>>start;

	int result=prims(start);

	cout<<result<<endl;

	return 0;
}