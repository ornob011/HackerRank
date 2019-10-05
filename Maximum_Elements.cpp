#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	stack<int>s;

	int tc, choice, element;

	cin>>tc;

	while(tc--)
	{
		cin>>choice;

		if(choice==1)
		{
			cin>>element;
			if(s.empty())
				s.push(element);
			else
				s.push(max(element, s.top()));
		}
		else if(choice==2)
		{
			if(!s.empty())
				s.pop();
		}
		else if(choice==3)
			cout<<s.top()<<endl;
	}
}