#include<stdio.h>
int main()
{
    int house_start, house_end, apple_location, orange_location, m, n, i, count_apple=0, count_orange=0;
    scanf("%d %d", &house_start, &house_end);
    scanf("%d %d", &apple_location, &orange_location);
    scanf("%d %d", &m, &n);

    int apple[m], orange[n], res_apple[m], res_orange[n];

    for(i=0; i<m; i++)
    {
        scanf("%d", &apple[i]);
        res_apple[i]=apple_location+apple[i];
        if(res_apple[i]>=house_start && res_apple[i]<=house_end)
            count_apple++;
    }

    for(i=0; i<n; i++)
    {
        scanf("%d", &orange[i]);
        res_orange[i]=orange_location+orange[i];
        if(res_orange[i]>=house_start && res_orange[i]<=house_end)
            count_orange++;
    }

    printf("%d\n%d\n", count_apple, count_orange);

    return 0;
}
