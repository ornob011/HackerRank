#include<bits/stdc++.h>
using namespace std;

int getBeautifulPairsCount(multiset<int>a, multiset<int>b)
{
	int count=0;

	for(auto &it:a)
	{
		multiset<int>::iterator bitr=b.find(it);

		if(bitr!=b.end())
		{
			count++;
			b.erase(bitr);
		}
	}
	if(b.size()==0)
		count--;
	else
		count++;

	return count;
}


int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	multiset<int>a, b;

	int size, temp, i;

	cin>>size;

	for(i=0; i<size; i++)
	{
		cin>>temp;
		a.insert(temp);
	}

	for(i=0; i<size; i++)
	{
		cin>>temp;
		b.insert(temp);
	}

	cout<<getBeautifulPairsCount(a, b)<<endl;

	return 0;
}