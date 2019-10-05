#include<stdio.h>
int main()
{
	int arr[101]={0}, i, n, x, res=0;
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &x);
		arr[x]++;
	}
	for(i=0; i<=100; i++)
		res=res+arr[i]/2;
	
	printf("%d\n", res);
	
	return 0;
}
