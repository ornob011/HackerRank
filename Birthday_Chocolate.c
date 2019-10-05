#include<stdio.h>
int main()
{
	int i, j=0, n, m, d, x, sum=0, count=0;
	scanf("%d", &n);
	
	int arr[n];
	
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	scanf("%d %d", &d, &m);
	
	for(i=0; i<=n-m; i++)
	{
		for(j=i, x=1; x<=m; j++, x++)
		{
			sum=sum+arr[j];
		}
		if(sum==d)
			count++;
		
		sum=0;
	}
	
	printf("%d\n", count);
	
	return 0;
}
