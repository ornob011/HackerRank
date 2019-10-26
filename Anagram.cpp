#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int i, t; 
	string input, a, b;


	cin>>t;
	while(t--)
	{
		int count=0;
		cin>>input;

		a=input.substr(0, input.size()/2);
		b=input.substr(input.size()/2);

		map<char, int>hmap;

		if(a.size()==b.size())
		{
			for(i=0; i<a.size(); i++)
				hmap[a[i]]++;

			for(i=0; i<b.size(); i++)
			{
				hmap[b[i]]--;
				if(hmap[b[i]]<0)
					count++;
			}

			cout<<count<<endl;


		}
		else
			cout<<-1<<endl;
	}

	return 0;
}