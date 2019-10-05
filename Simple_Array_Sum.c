#include<stdio.h>
int main()
{
    int N, i, sum=0;
    scanf("%d", &N);
    int A[N];
    for(i=0; i<N; i++)
        {
            scanf("%d", &A[i]);
            sum=sum+A[i];
        }
    printf("%d\n", sum);
    return 0;
}
