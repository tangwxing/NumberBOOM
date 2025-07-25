#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
这是一个数字炸弹游戏
*/
int main()
{
	srand((unsigned int)time(NULL));
	int arr[100] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 0; i < 100; i++)
	{
		printf("%d	", arr[i]);
		j++;
		if (j % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	int x = (rand() % 100) + 1;
	int y = 0;
	int max = 100;
	int min = 0;
	while (1)
	{
		printf("请输入数字：");
		scanf("%d", &y);
		int num = 0;
		if (y < x)
		{
			min = y;

			for(i = min; i < max; i++)
			{
				printf("%d	", arr[i]);
				num++;
				if (num % 10 == 0)
				{
					printf("\n");
				}
			}
		printf("\n");
		}
		
		else if (y > x)
		{
			max = y - 1;
			for (i = min; i < max; i++)
			{
				printf("%d	", arr[i]);
				num++;
				if (num % 10 == 0)
				{
					printf("\n");
				}
			}
		printf("\n");
		}
		
		else
		{
			printf("BOOM!!!");
			break;
		}
	}
	return 0;
}