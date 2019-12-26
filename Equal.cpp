#include<bits/stdc++.h>
using namespace std;

int numOps(int n)
{
	int result=0;
	
	result+=n/5;
	n%=5;
	result+=n/2;
	n%=2;
	result+=n;

	return result;	
}
int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int t, n, i, j, answer, tmpanswer;
	cin>>t;

	while(t--)
	{
		cin>>n;

		vector<int>vec(n);

		for(i=0; i<n; i++)
			cin>>vec[i];

		auto min_ele=min_element(vec.begin(), vec.end());

		answer=INT_MAX;

		for(i=0; i<4; i++)
		{
			tmpanswer=0;

			for(j=0; j<n; j++)
				tmpanswer=tmpanswer+numOps(vec[j]-*min_ele+i);
			
			if(tmpanswer<answer)
				answer=tmpanswer;
		}
		cout<<answer<<endl;
	}

	return 0;
}