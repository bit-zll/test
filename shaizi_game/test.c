#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("***********************\n");
	printf("*****1.play  0.exit****\n");
	printf("***********************\n");
}
void game()
{
	int data[6][4] = { { 2, 3, 5, 4 }, { 6, 3, 1, 4 }, { 1, 2, 6, 5 }, { 1, 5, 6, 2 }, { 1, 3, 6, 4 }, { 2, 4, 5, 3 } };
	unsigned int value = 0;
	srand(time(NULL));
	value = rand() % 6;//0-5

	printf("�����ĵ����ǣ� %d\n", value + 1);//1-6

	unsigned int value_2 = 0;
	value_2 = rand() % 4;//0-3

	printf("�����ǣ�%d\n", data[value][value_2]);
	printf("�����ǣ�%d\n", data[value][(value_2 + 1)%4]);
	printf("�����ǣ�%d\n", data[value][(value_2 + 2)%4]);
	printf("�����ǣ�%d\n", data[value][(value_2 + 3)%4]);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
	return 0;
}