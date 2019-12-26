#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	int s, k, u, i, j;
	cin>>s>>k>>u;

	vector<int>keyboard(k), usb(u);


	for(i=0; i<k; i++)
		cin>>keyboard[i];

	for(i=0; i<u; i++)
		cin>>usb[i];

	int spend=-1;

	sort(keyboard.begin(), keyboard.end(), greater<int>());

	sort(usb.begin(), usb.end());

	for(i=0, j=0; i<k; i++)
	{
		for(; j<u; j++)
		{
			if(keyboard[i]+usb[j]>s)
				break;

			if(keyboard[i]+usb[j]>spend)
				spend=keyboard[i]+usb[j];
		}
	}

	cout<<spend<<endl;

	return 0;
}