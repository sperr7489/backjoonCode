#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int ansaDis(int n)//이 함수의 인자로는 도착점과 시작점의 거리에 들어가게 된다. 
{
	int root = (int)sqrt(n);
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else if (n == 3)
		return 3;
	else
	{
		if ( root*root == n)//완전제곱식일 때
		{
			return 2 * root - 1;
		}
		else if (n <= root * root + root)
		{
			return root * 2;
		}
		else
			return root * 2 + 1;
	}
}


int main()
{
	int t;//test case
	int s, a; //start, arrive
	int dis;//distance
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &s, &a);
		dis = a - s;

		printf("%d\n", ansaDis(dis));

	}
	return 0;

}