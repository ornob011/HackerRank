#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n], i, max=0, x, ans;
	
	for(i=0; i<n; i++)
		a[i]=0;
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &x);
		a[x]++;
	}
	
	for(i=1; i<=5; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			ans=i;
		}
	}
	printf("%d\n", ans);
	return 0;
}
