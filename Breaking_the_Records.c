#include<stdio.h>
int main()
{
	int i, n, temp, maximum, minimum, max_count=0, min_count=0;
	
	scanf("%d", &n);
	
	scanf("%d", &maximum);
	
	minimum=maximum;
	
	for(i=1; i<n; i++)
	{
		scanf("%d", &temp);
		if(temp>maximum)
		{
			maximum=temp;
			max_count++;
		}
		if(temp<minimum)
		{
			minimum=temp;
			min_count++;
		}
	}
	printf("%d %d\n", max_count, min_count);
	
	return 0;
}
		
