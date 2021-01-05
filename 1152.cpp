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
	char* temp = strtok(str, " ");//공백으로 시작한다하더라도 다음번 공백이 나올 때 짤리게 된다. 
	while (temp != NULL)
	{
		count++;

		temp = strtok(NULL, " ");
		
	}
	
	printf("%d", count);
	return 0;

}