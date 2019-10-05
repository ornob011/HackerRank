#include<stdio.h>
int main()
{
    int n, m, i, k, count=0, flag;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<m; i++)
        scanf("%d", &b[i]);

    for(k=a[n-1]; k<=b[0]; k++)
    {
        flag=1;
        for(i=0; i<n; i++)
        {
            if(k%a[i]!=0)
                flag=0;
        }
        for(i=0; i<m; i++)
        {
            if(b[i]%k!=0)
                flag=0;
        }
        if(flag==1)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
