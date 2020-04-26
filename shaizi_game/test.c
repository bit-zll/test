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

	printf("掷到的点数是： %d\n", value + 1);//1-6

	unsigned int value_2 = 0;
	value_2 = rand() % 4;//0-3

	printf("正面是：%d\n", data[value][value_2]);
	printf("左面是：%d\n", data[value][(value_2 + 1)%4]);
	printf("后面是：%d\n", data[value][(value_2 + 2)%4]);
	printf("右面是：%d\n", data[value][(value_2 + 3)%4]);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	return 0;
}