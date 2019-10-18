#include<bits/stdc++.h>
using namespace std;

bool contains(vector<string>G, vector<string>P, int R, int C, int r, int c)
{
	bool flag;

	int i, j, k, l;

	for(i=0; i<=R-r; i++)
	{
		for(j=0; j<=C-c; j++)
		{
			flag=true;
			for(k=0; k<r; k++)
			{
				for(l=0; l<c; l++)
				{
					if(G[i+k][j+l]!=P[k][l])
					{
						flag=false;
						break;
					}
				}
				if(!flag)
					break;
			}
			if(flag)
				return true;
		}
	}
	return false;
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, R, C, r, c, i;

	cin>>t;

	while(t--)
	{
		cin>>R>>C;
		vector<string>G(R);

		for(i=0; i<R; i++)
			cin>>G[i];
		
		cin>>r>>c;
		vector<string>P(r);

		for(i=0; i<r; i++)
			cin>>P[i];

		if(contains(G,P,R,C,r,c))
			cout<<"YES"<<endl;

		else
			cout<<"NO"<<endl;

	}


	return 0;
}