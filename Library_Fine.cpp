#include<bits/stdc++.h>
using namespace std;

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int d1, d2, m1, m2, y1, y2, fine=0;

	cin>>d1>>m1>>y1;
	cin>>d2>>m2>>y2;

	if(d1>d2 && y1==y2 && m1==m2)
		fine=15*(d1-d2);

	else if(m1>m2 && y1==y2)
		fine=500*(m1-m2);

	else if(y1>y2)
		fine=10000;

	cout<<fine<<endl;

	return 0;
}