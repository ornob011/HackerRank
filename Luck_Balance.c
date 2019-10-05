#include<stdio.h>
int main()
{
	int n, k;
	
	scanf("%d %d", &n, &k);
	
	int L[n], T[n], i, C[n], sum=0, index=0;
	
	for(i=0; i<n; i++)
	{
		scanf("%d %d", &L[i], &T[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(T[i]==0)
			sum=sum+L[i];
		else
			{
				C[index]=L[i];
				index++;
			}
	}
	int size=index;
	int temp, j;
	for(i=0; i<size; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			if(C[j]>C[j+1])
			{
				temp=C[j];
				C[j]=C[j+1];
				C[j+1]=temp;
			}
		}
	}	
	
	for(i=size-1; i>=0 && k>0; i--, k--)
	{
		sum=sum+C[i];
	}
    
    int cout=0;
    while(i>=0)
    {
        cout=cout+C[i];
        i--;
    }
   
    printf("%d\n", sum-cout);
	
	return 0;
}
