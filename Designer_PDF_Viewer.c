#include<stdio.h>
#include<string.h>
int main()
{
	int i, alpha[26];
	for(i=0; i<26; i++)
	{
		scanf("%d", &alpha[i]);
	}
	
	char str[27];
	scanf(" %s", str);
	
	int len;
	len=strlen(str);
	
	int temp=alpha[str[0]-97];
	
	for(i=1; i<len; i++)
	{
		if(temp<alpha[str[i]-97])
			temp=alpha[str[i]-97];	
	}
	
	printf("%d\n", temp*len);
	
	return 0;
}
