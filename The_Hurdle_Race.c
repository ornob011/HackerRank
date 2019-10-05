#include<stdio.h>
int main()
{
	int n, k, i, max;
	scanf("%d %d", &n, &k);
	int height[n];
	
	for(i=0; i<n; i++)
		scanf("%d", &height[i]);
		
	max=height[0];
	for(i=1; i<n; i++)
	{
		if(max<height[i])
			max=height[i];	
	}
	
	if(k<max)
		printf("%d\n", max-k);
	else
		printf("0\n");
		
	return 0;
		
}
