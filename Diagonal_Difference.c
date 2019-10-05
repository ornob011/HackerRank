#include<stdio.h>
#include<math.h>
int main()
{
    int primary_diagonal=0, secondary_diagonal=0, i, j, sum=0, n, temp;
    scanf("%d", &n);
    int a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }
    temp=n-1;
    for(i=0; i<n; i++)
    {
        primary_diagonal=primary_diagonal+a[i][i];
        secondary_diagonal=secondary_diagonal+a[i][temp];
        temp--;
    }
    printf("%d\n", abs(primary_diagonal-secondary_diagonal));
    return 0;
}
