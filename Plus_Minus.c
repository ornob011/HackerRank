#include<stdio.h>
int main()
{
    int n, i, pos=0, neg=0, zero=0;
    float ans_n = 0.0, ans_p = 0.0, ans_z= 0.0;
    int number;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
       scanf("%d", &number);
       if(number > 0)
            pos++;

        else if(number < 0)
            neg++;

       else
           zero++;
    }


    ans_p = (float)pos/n;
    ans_n = (float)neg/n;
    ans_z = (float)zero/n;

    printf("%.6f\n%.6f\n%.6f\n", ans_p, ans_n, ans_z);

    return 0;
}
