#include <stdio.h>
int function(unsigned long long num)
{
	unsigned long long i = 1, j = 1, fibo = 1, m, n;
	for (m = 0;; m++)
	{
		fibo = i + j;
		i = j;
		j = fibo;
		if (fibo == num)
			return 1;
		else if (fibo > num)
			return 0;
	}
}
int main()
{
	//freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	//freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	unsigned t;
	scanf("%u", &t);
	while (t--)
	{
		unsigned long long answer = 0, num;
		scanf("%llu", &num);
		if (num == 0 || num == 1)
			printf("IsFibo\n");

		else
		{
			answer = function(num);
			if (answer)
				printf("IsFibo\n");

			else
				printf("IsNotFibo\n");
		}
	}
	return 0;
}