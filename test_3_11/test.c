#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//int main()          //�����������Լ��
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()                                        //�ж�1000��2000֮�������
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()               //��100��200֮�������
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()              //��10������������
//{
//	int arr[] = { 1, 2, 3, 4,5, 6, 7, 8, 9, 10,11 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()         //�˷��ھ���
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			k = i*j;
//			printf("%d*%d=%-2d ", i, j, k);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void menu()                 //��������Ϸ
//{
//	printf("************************\n");
//	printf("*****1.play  0.exit*****\n");
//	printf("************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;          //rand()����һ�������
//	while (1)
//	{
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));    //rand()֮ǰҪ����srand   timeʱ��� ����
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ļ��������һ���Ӻ�ػ���������룺��������ȡ���ػ�\n������:>");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}