#include<stdio.h>
int main()
{
    int x1, v1, x2, v2, i, j, flag=0;
    scanf("%d %d", &x1, &v1);
    scanf("%d %d", &x2, &v2);

    for(i=x1, j=x2; i<=j ; i=i+v1, j=j+v2)
    {
        if(i==j)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("YES\n");

    else
        printf("NO\n");

    return 0;

}
