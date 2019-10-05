#include<stdio.h>
int main()
{
	int book_length, desired_page, i, forward=0, backward=0, res;
	scanf("%d %d", &book_length, &desired_page);
	
	if(book_length==desired_page)
	{
		printf("0\n");
		return 0;
	}
	
	for(i=1; i<=book_length; i++)
	{
		forward++;
		if(i==desired_page)
			break;
	}
	
	
	if(book_length%2==0)
	{
		for(i=book_length; i>=1; i--)
		{
			backward++;
			if(i==desired_page)
				break;
		}
	}
	
	else
	{
		for(i=book_length-1; i>=1; i--)
		{
			backward++;
			if(i==desired_page)
				break;
		}
	}
	backward=backward/2;
	forward=forward/2;
	
	res=forward<backward?forward:backward;
	
	printf("%d\n", res);
	
	return 0;
}
