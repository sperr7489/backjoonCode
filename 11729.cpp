#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�� �Լ� ��� n�̶�� �ϳ���ž�� ������ ���ڷ� �޴´�. 


int calHanoi(int n);//�ϳ��� ž�� ��� �����̴� �� 

void printHanoi(int n,int start, int mid, int arrive);//�ϳ��� ž�� � �������� ����� �Ǵ���

int main()
{
	int n;
	int start = 1;
	int mid = 2;
	int arrive = 3;
	scanf("%d", &n);

	printf("%d\n",calHanoi(n));

	printHanoi(n,start,mid, arrive);

	return 0;


}
int calHanoi(int n)
{

	if (n == 1)
	{
		return 1;
	}
	return 2 * calHanoi(n - 1) + 1;


}
void printHanoi(int n, int start, int mid, int arrive)
{
	
	if (n == 1)
	{
		printf("%d %d\n",start, arrive);
		return;
	}
	printHanoi(n - 1, start,arrive, mid);//n-1���� �ι�°�� ��ġ��Ų��. 
	printf("%d %d\n", start, arrive);;//���� �ؿ� �ִ� ���� �����ϴ� ������ ��ġ��Ų��. 
	printHanoi(n - 1, mid, start, arrive);//n-1���� ���� �ι�°�� �ִµ� �̸� ���� �������� �̵���Ų��. 

}