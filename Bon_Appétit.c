#include<stdio.h>
int main()
{
    int n, index, i, charged, dif, sum=0;
    scanf("%d %d", &n, &index);

    int item[n];

    for(i=0; i<n; i++)
        scanf("%d", &item[i]);

    scanf("%d", &charged);

    for(i=0; i<n; i++)
    {
		if(i==index)
            continue;
            
        sum=sum+item[i];
        
    }
    sum=sum/2;
    
    dif=charged-sum;
    
    if(dif==0)
        printf("Bon Appetit\n");
    else
        printf("%d\n", dif);

    return 0;
}
