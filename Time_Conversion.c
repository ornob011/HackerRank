#include<stdio.h>
#include<string.h>
int main()
{
    int h,m,s;
    char c[2];
    scanf("%d:%d:%d%s",&h,&m,&s,c);
    if(c[0]=='P' && c[1]=='M' && h != 12)
        h+=12;
    if(c[0]=='A' && c[1]=='M'&& h == 12)
        h = 0;
    printf("%02d:%02d:%02d\n",h,m,s);

    return 0;
}
