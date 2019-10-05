#include<stdio.h>
int main()
{
    long long N, i, sum=0;
    scanf("%lld", &N);
    long long A[N];
    for(i=0; i<N; i++)
        {
            scanf("%lld", &A[i]);
            sum=sum+A[i];
        }
    printf("%lld\n", sum);
    return 0;
}
