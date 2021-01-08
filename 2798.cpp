#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int maxM(int *card,int n, int m);
//�ִ��� ����� ������ ������� �� �ִ� �Լ�. 

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
		getchar();//����\n�� �Է����� �޾��ش�.		
	}
	
	printf("%d\n",maxM(card,n, m));

	free(card);
	return 0;

}
int maxM(int* card, int n, int m)
{
	//card ������ �̾Ƽ� �̵��� ���� m���� ���� �� �� ���� Ŀ�߸� �Ѵ�. 
	int temp = 0;
	int sum;


	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (m <= doubleSum(card[i], card[j],0))
				continue;
			else //�μ��� ���� m���� Ŭ��츦 ��� ������ ���.
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