#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int newNum(int n);
//생성자를 만들어내는 함수.	
int digitSum(int n);
//각 자리수의 합을 출력하는것. 
int main()
{
	int n;
	scanf("%d", &n);

	printf("%d\n", newNum(n));


	return 0;


}
int newNum(int n)
{
	int result = 0;
	if (n == 1)
		return result;
	for (int i = 1; i < n; i++)
	{
		if (digitSum(i) + i == n)
			return i;
	}
	return result;

}
int digitSum(int n)
{
	int temp = 0;

	while (n)
	{
		temp += (n % 10);
		n /= 10;
	}
	return temp;

}