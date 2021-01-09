#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#define size 20001	



void diction(char* a, char* b);
//문자열의 사전식 순서대로 배열한것. 
int compare(const void* a, const void* b);


int main()
{
	char word[size][51] = {""};
	
	int n;
	char temp[51]="";
	int str_num = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", temp);
	
		strcpy(word[i], temp);
		//단어의 갯수에서 작은 것부터 나열하기. 
					
		str_num++;

	}
	qsort(word, n, sizeof(word[0]), compare);
	//int i = 0;
	//for ( i ; i < str_num-1; i++)
	//{
	//	for (int j = i+1; j < str_num; j++)
	//	{
	//		if (strlen(word[i]) > strlen(word[j]))
	//		{
	//			strcpy(temp, word[i]);
	//			strcpy(word[i], word[j]);
	//			strcpy(word[j], temp);
	//			
	//		}
	//		else 
	//			if (strlen(word[i]) == strlen(word[j]))//more wait 비교한다면.
	//			{
	//				diction(word[i], word[j]);
	//			}
	//	}
	//}
	
	for (int i = 0; i < str_num; i++)
	{
		if (strcmp(word[i], word[i + 1]) == 0) continue;
		printf("%s\n", word[i]);
	
	}
	
	return 0;
}
void diction(char* a,char * b)
{
	int n = strlen(a);
	char temp[51]=" ";

	for (int i = 0; i < n; i++)
	{
		if (a[i] > b[i])
		{
			strcpy(temp, a);
			strcpy(a, b);
			strcpy(b, temp);
			break;
		}
		else
			continue;
	}

}
int compare(const void* a, const void* b)
{
	int num1 = strlen((char*)a);    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = strlen((char*)b);     // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	
	if (num1 == num2)
	{
		return strcmp((char*)a, (char*)b);
	}
	else if (num1 > num2)
	{
		return 1;
	}
	else
		return -1;
		// a와 b가 같을 때는 0 반환

}