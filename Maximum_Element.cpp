#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, choice, x;

	stack<int>s;

	cin>>t;
	while(t--)
	{
		cin>>choice;

		if(choice==1)
		{
			cin>>x;
			if(s.empty())
				s.push(x);
			else
				s.push(max(x, s.top()));
		}
		else if(choice==2)
		{
			if(!s.empty())
				s.pop();
		}
		else if(choice==3)
			cout<<s.top()<<endl;;

	}
	return 0;
}
