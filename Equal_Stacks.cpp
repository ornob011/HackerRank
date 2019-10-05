#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	//freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int n1, n2, n3, h1=0, h2=0, h3=0, r1=0, r2=0, r3=0, i;
	cin>>n1>>n2>>n3;

	vector<int>v1(n1);
	for(i=0; i<n1; i++)
	{
		cin>>v1[i];
		h1=h1+v1[i];
	}


	vector<int>v2(n2);
	for(i=0; i<n2; i++)
	{
		cin>>v2[i];
		h2=h2+v2[i];
	}


	vector<int>v3(n3);
	for(i=0; i<n3; i++)
	{
		cin>>v3[i];
		h3=h3+v3[i];
	}


	bool height=false;

	if(h1==h2 && h2==h3)
		height=true;

	while(!height)
	{
		if(h1>=h2 && h1>=h3)
		{
			h1=h1-v1[r1];
			r1++;
		}
		
		else if(h2>=h1 && h2>=h3)
		{
			h2=h2-v2[r2];
			r2++;
		}
		else if(h3>=h1 && h3>=h2)
		{
			h3=h3-v3[r3];
			r3++;
		}

		if((h1==h2 && h2==h3) || (h1==0 && h2==0 && h3==0))
			height=true;
	}
	cout<<h1<<endl;

	return 0;
}