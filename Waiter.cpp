#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int i, q, n, x, j;

	vector<int>prime;
	prime.push_back(2);
	prime.push_back(3);

	for(i=5; i<=10000; i++)
	{
		int flag=0;
		for(j=2; j*j<=i; j++)
		{
			if(i%j==0)
				flag=1;
		}
		if(!flag)
			prime.push_back(i);
	}

	cin>>n>>q;

	stack<int>s, prime_s, non_prime_s;

	for(i=0; i<n; i++)
	{
		cin>>x;

		s.push(x);
	}

	for(i=0; i<q; i++)
	{
		int z=prime[i];

		if(s.empty())
			break;

		while(!s.empty())
		{
			x=s.top();
			s.pop();

			if(x%z==0)
				prime_s.push(x);

			else
				non_prime_s.push(x);

		}
		while(!prime_s.empty())
		{
			cout<<prime_s.top()<<endl;
			prime_s.pop();
		}
		s=non_prime_s;

		while(!non_prime_s.empty())
		{
			non_prime_s.pop();
		}
		

	}
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}