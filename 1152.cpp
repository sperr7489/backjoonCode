#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000000];
	
	fgets(str, sizeof(str),stdin);

	int val = strlen(str) - 1;
	
	
	int count = 0;
	if (str[0] == ' ')
	{
		if (strlen(str) == 1)
		{
			printf("0");
			return 0;
		}
		
	}
	if (str[val - 1] == ' ')
		count--;
	char* temp = strtok(str, " ");//�������� �����Ѵ��ϴ��� ������ ������ ���� �� ©���� �ȴ�. 
	while (temp != NULL)
	{
		count++;

		temp = strtok(NULL, " ");
		
	}
	
	printf("%d", count);
	return 0;

}