#include<stdio.h>
int main()
{
	int n, k, sum=0, i, j, count=0;
	scanf("%d %d", &n, &k);
	
	int arr[n];
	
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
		
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			sum=arr[i]+arr[j];
			if(sum%k==0)
				count++;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
