#include<bits/stdc++.h>
using namespace std;

int specialProblems(std::vector<int>&t, std::vector<int>&numPagesForChapter, int n, int k)
{
	int i, c, pageNum=1, special=0;

	for(i=1; i<=n; i++)
	{
		for(c=1; c<=numPagesForChapter[i]; c++)
		{
			if(pageNum>=((c-1)*k+1) && pageNum<=min(c*k, t[i]))
				special++;

			pageNum++;
		}
	}
	return special;
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n, k, i;

	cin>>n>>k;

	vector<int>t(n+1), numPagesForChapter(n+1);

	for(i=1; i<=n; i++)
		cin>>t[i];

	for(i=1; i<=n; i++)
		numPagesForChapter[i]=ceil((double)t[i]/k);

	cout<<specialProblems(t, numPagesForChapter, n , k)<<endl;
	
	return 0;
}