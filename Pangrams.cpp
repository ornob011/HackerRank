#include<bits/stdc++.h>
using namespace std;

string solve(string &s)
{
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	
	vector<bool>check(26, false);

	int index, i, length;

	length=s.length();

	for(i=0; i<length; i++)
	{
		if(isalpha(s[i]))
			index=s[i]-'a';

		check[index]=true;
	}

	for(i=0; i<=25; i++)
	{
		if(check[i]==false)
			return "not pangram";
	}
	return "pangram";

}

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	string s;

	getline(cin, s);

	cout<<solve(s)<<endl;
	
	return 0;
}
