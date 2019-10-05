#include<stdio.h>
int main()
{
    int n, i, num;
    scanf("%d", &n);
    int grades[n], result[n];
    for(i=0; i<n; i++)
        scanf("%d", &grades[i]);

    for(i=0; i<n; i++)
    {
        if(grades[i]%5!=0)
        {
            num=grades[i];
            while(num%5!=0)
                num++;
            if(num-grades[i]<3 && num>=40)
                result[i]=num;
            else
                result[i]=grades[i];
        }
        else
            result[i]=grades[i];
        printf("%d\n", result[i]);
    }
    return 0;
}
