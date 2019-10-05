#include<stdio.h>
int main()
{
    long int arr[6], i, j, min, max, temp;
    for(i=0; i<5; i++)
        scanf("%ld", &arr[i]);
    for(i=0; i<5-1; i++)
    {
        for(j=0; j<5-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    min=0;
    for(j=0; j<5-1; j++)
        min=min+arr[j];

    max=0;
    for(j=1; j<5; j++)
        max=max+arr[j];

    printf("%ld %ld\n", min, max);

    return 0;
}
