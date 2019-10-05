#include<stdio.h>
int main()
{
    int alice[100], bob[100], i, alice_score, bob_score, j;
    for(i=0; i<3; i++)
        scanf("%d", &alice[i]);
    for(i=0; i<3; i++)
        scanf("%d", &bob[i]);
    alice_score=0;
    bob_score=0;
    for(i=0; i<3; i++)
    {
        if(alice[i]>bob[i])
            alice_score++;
    }
    for(i=0; i<3; i++)
    {
        if(alice[i]<bob[i])
            bob_score++;
    }
    printf("%d %d\n", alice_score, bob_score);
    return 0;
}
