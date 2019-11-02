#include<bits/stdc++.h>
using namespace std;

string minutes[30] = {"one minute", 
"two minutes",
"three minutes",
"four minutes",
"five minutes",
"six minutes",
"seven minutes",
"eight minutes",
"nine minutes",
"ten minutes",
"eleven minutes",
"twelve minutes",
"thirteen minutes",
"forteen minutes",
"quarter",
"sixteen minutes",
"seventeen minutes",
"eighteen minutes",
"nineteen minutes",
"twenty minutes",
"twenty one minutes",
"twenty two minutes",
"twenty three minutes",
"twenty four minutes",
"twenty five minutes",
"twenty six minutes",
"twenty seven minutes",
"twenty eight minutes",
"twenty nine minutes",
"half"};

string hours[12] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};


int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int h, m;
	cin>>h>>m;
	
	if(m==0)
		cout<<hours[h-1]<<" o' clock"<<endl;

	else if(m<=30)
		cout<<minutes[m-1]<<" past "<<hours[h-1]<<endl;

	else
		cout<<minutes[60-m-1]<<" to "<<hours[h]<<endl;

	return 0;
}