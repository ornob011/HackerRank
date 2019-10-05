#include<stdio.h>
int main()
{
    int a[6][6], i, j;
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
            scanf("%d", &a[i][j]);
    }
    int max=-63;
    int sum;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(sum>max)
                max=sum;
        }
    }
    printf("%d\n", max);
    return 0;
}
