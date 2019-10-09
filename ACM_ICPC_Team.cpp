 
#include<bits/stdc++.h>
using namespace std;

int acm(string &a, string &b, int length)
{	
	int topicsKnown=0;
	for(int i=0; i<length; i++)
	{
		if(a.at(i)=='1' or b.at(i)=='1')
			topicsKnown++;
	}
	return topicsKnown;
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	string str[500]={};
	int team_ammount, m, i, j;

	cin>>team_ammount>>m;

	for(i=0; i<team_ammount; i++)
		cin>>str[i];


	int maxknown=0, count=0, known;

	for(i=0; i<team_ammount-1; i++)
	{
		for(j=i+1; j<team_ammount; j++)
		{
			known=acm(str[i], str[j], m);

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
