#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//‭11001000‬
//‭01100100‬
//00101100
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}
//int main()
//{
//	int murder[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		murder[i] = 1;
//		if ((murder[0] != 1) + (murder[2] == 1) + (murder[3] == 1) + (murder[3] != 1) == 3)
//		{
//			break;
//		}
//		murder[i] = 0;
//	}
//	putchar('A' + i);
//	return 0;
//}
//void yanghuiTriangle(int n)
//{
//	int d[30][30] = { 1 };
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < n; i++)
//	{
//		d[i][0] = 1;
//		for (j = 1; j <=i; j++)
//		{
//			d[i][j] = d[i - 1][j - 1] + d[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", d[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	yanghuiTriangle(n);
//	return 0;
//}