#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int hanNum(int n)
{
	int fisrtNum = n % 10;
	n /= 10;
	int secondNum = n % 10;
	n /= 10;
	int thirdNum = n % 10;
	if ((thirdNum - secondNum) != (secondNum - fisrtNum))
		return 0;
	return 1;
}
int main()
{
	int n;
	int result = 0;
	scanf("%d", &n);

	if (n < 100)
	{
		result = n;
		printf("%d", result);

		return 0;
	}
	else
	{
		if (n == 1000)
		{
			printf("144");
			return 0;
		}
		result = 99;
		for (int i = 100; i <= n; i++)
		{
			result += hanNum(i);

		}
	}
	printf("%d", result);


	return 0;

}