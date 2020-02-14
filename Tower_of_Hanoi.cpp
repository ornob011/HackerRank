#include<bits/stdc++.h>
using namespace std;

void Toh(int n, char source, char aux, char des)
{
	if(n==1)
	{
		cout<<"Moving ring "<<n<<" from "<<source<<" to "<<des<<endl;
		return;
	}
	else
	{	
		Toh(n-1, source, des, aux);
		cout<<"Moving ring "<<n<<" from "<<source<<" to "<<des<<endl;
		Toh(n-1, aux, source, des);
	}
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int n;
	cin>>n;
	Toh(n, 'A', 'C', 'B');
	return 0;
}