#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int maxM(int *card,int n, int m);
//최대한 가까운 합으로 출력해줄 수 있는 함수. 

int doubleSum(int a, int b,int c);

int main()
{
	int n, m;
	int* card;

	scanf("%d %d", &n, &m);
		
	card = (int*)malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card[i]);
		getchar();//앞의\n을 입력으로 받아준다.		
	}
	
	printf("%d\n",maxM(card,n, m));

	free(card);
	return 0;

}
int maxM(int* card, int n, int m)
{
	//card 세개를 뽑아서 이들으 합이 m보다 작은 수 중 가장 커야만 한다. 
	int temp = 0;
	int sum;


	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (m <= doubleSum(card[i], card[j],0))
				continue;
			else //두수의 합이 m보다 클경우를 모두 제외한 경우.
			{
				

				for (int k = j + 1; k < n; k++)
				{
					sum = doubleSum(card[i], card[j], card[k]);
					if (sum > m)
						continue;
					else
						if (m - temp >= m - sum)
						{
							temp = sum;
						}
				}
			}
		}
	}
	return temp;

}





int doubleSum(int a, int b, int c)
{
	return a + b + c;
}