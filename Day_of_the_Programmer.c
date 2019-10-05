#include<stdio.h>
int result(int year)
{
    int days=215, february;

    if(year<=1917)
    {
        if(year%4==0)
            february=29;
        else
            february=28;
    }

    else if(year==1918)
        february=15;

    else
    {
        if((year%400==0) || (year%4==0) && (year%100!=0))
            february=29;
        else
            february=28;
    }
    return 256-(days+february);
}

int main()
{
    int year;

    scanf("%d", &year);

    printf("%d.09.%d\n", result(year), year);

    return 0;
}
