 
#include<bits/stdc++.h>
using namespace std;

using Bitmask=bitset<500>;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int team_ammount, m, i, j;

	cin>>team_ammount>>m;

	vector<Bitmask>vec(team_ammount);
	for(i=0; i<team_ammount; i++)
		cin>>vec[i];


	int maxknown=0, count=0, known;

	for(i=0; i<team_ammount-1; i++)
	{
		for(j=i+1; j<team_ammount; j++)
		{
			auto test=vec[i]|vec[j];
			known=test.count();

			if(known>maxknown)
			{
				maxknown=known;
				count=1;
			}
			else if(known==maxknown)
				count++;
		}
	}
	cout<<maxknown<<endl;
	cout<<count<<endl;


	return 0;
}
