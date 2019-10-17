#include<bits/stdc++.h>
using namespace std;

int main()
{   
	freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);
	
	int book_length, desired_page, forward, backward, res, total;
	scanf("%d %d", &book_length, &desired_page);

	total=book_length/2;
	forward=desired_page/2;

	backward=total-forward;

	res=min(forward, backward);

	cout<<res<<endl;
	
	
	
	return 0;
}
