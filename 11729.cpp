#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//두 함수 모두 n이라는 하노이탑의 갯수를 인자로 받는다. 


int calHanoi(int n);//하노이 탑이 몇번 움직이는 지 

void printHanoi(int n,int start, int mid, int arrive);//하노이 탑이 어떤 과정으로 출력이 되는지

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
	printHanoi(n - 1, start,arrive, mid);//n-1개를 두번째에 위치시킨다. 
	printf("%d %d\n", start, arrive);;//가장 밑에 있는 것을 도착하는 곳으로 위치시킨다. 
	printHanoi(n - 1, mid, start, arrive);//n-1개가 현재 두번째에 있는데 이를 도착 지점으로 이동시킨다. 

}