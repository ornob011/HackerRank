#include<bits/stdc++.h>
using namespace std;

int getGemCount(std::vector<string> rocks)
{
	int i, j, count=0;
	bool flag;

	for(j='a'; j<='z'; j++)
	{
		flag=true;

		for(i=0; i<rocks.size(); i++)
		{
			if(rocks[i].find(j)==string::npos)
			{
				flag=false;
				break;
			}
		}
		if(flag)
			count++;
	}
	return count;
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int n;
	cin>>n;

	vector<string>rocks(n);

	for(int i=0; i<n; i++)
		cin>>rocks[i];

	cout<<getGemCount(rocks)<<endl;
	return 0;
}