#include<bits/stdc++.h>
using namespace std;

string catAndMouse(int x, int y, int cat)
{
	int a=abs(x-cat);
	int b=abs(y-cat);

	if(a>b)
		return "Cat B";

	else if(a<b)
		return "Cat A";

	else
		return "Mouse C";
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int t, x, y, cat;
	string res;
	cin>>t;

	while(t--)
	{
		cin>>x>>y>>cat;

		res=catAndMouse(x, y, cat);

		cout<<res<<endl;
	}
	return 0;
} 
