#include<stdio.h>
int main()
{
	int size, alice_s;
	scanf("%d", &size);
	
	int score[size+2], i, j, k, t;
	
	scanf("%d", &score[0]);
	
	for(i=1, k=1; k<size; k++)
	{
		scanf("%d", &t);
		if(t!=score[i-1])
		{
			score[i]=t;
			i++;
		}
	}
	int n=i, rank;
	j=n-1;
	
	scanf("%d", &alice_s);
	
	int alice[alice_s];
	
	for(i=0; i<alice_s; i++)
		scanf("%d", &alice[i]);
	
	for(i=0;i<alice_s;i++)
    {
        while(j>=0 && alice[i]>score[j])
            j--;
        if(j==-1)
            rank=1;
        
        else if(alice[i] == score[j])
            rank=j+1;
        
        else if(alice[i] < score[j])
			rank=j+2;
			
        printf("%d\n",rank);
    }
    
    return 0;
}
