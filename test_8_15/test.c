#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d", a - 10);
//	}
//	else
//	{
//		printf("%d", a++);
//	}
//	return 0;
//}

//int main()
//{
//	double **a[3][4];
//	printf("%d\n", sizeof(a));
//	return 0;
//}

//int main()
//{
//	int x, y, z;
//	x = z = 2;
//	y = 3;
//	if (x > y)
//		z = 1;
//	else if (x == y)
//		z = 0;
//	else
//		z = -1;
//	printf("%d\n", z);
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char acHello[] = "hello\0world";
//	char acNew[15] = { 0 };
//	strcpy(acNew, acHello);
//	printf("%d %d\n", strlen(acNew), sizeof(acHello));
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 0)
//	{
//		printf("ÎÞÐ§Öµ\n");
//		return -1;
//	}
//	else if (n == 1 || n == 2)
//		return 1;
//	else
//	{
//		int pprev = 1;
//		int prev = 1;
//		int sum = 0;
//		for (int i = 2; i < n; i++)
//		{
//			sum = pprev + prev;
//			pprev = prev;
//			prev = sum;
//		}
//		return sum;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char a[20];
//	char* p1 = (char*)a;
//	char* p2 = (char*)(a + 5);
//	int n = p2 - p1;
//	printf("%d\n", n);
//	return 0;
//}

//#define F(x,y) ((x)+(y))
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//	return 0;
//}

//int main()
//{
//	int x;
//	x = 5 > 1 + 2 && 2 || 2 * 4 < 4 - !0;
//	printf("%d\n",x);
//	return 0;
//}

//int main()
//{
//	int i = 1, sum = 0;
//	while (i < 10)
//	{
//		sum = sum + 1;
//		i++;
//	}
//	printf("i=%d,sum=%d\n", i, sum);
//	return 0;
//

//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1=5,
//	A1,
//	B1,
//};
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_B enumB = B1;
//	printf("%d %d", enumA, enumB);
//	return 0;
//}

//int fun(int x, int y)
//{
//	static int m = 0;
//	static int i = 2;
//	i += m + 1;
//	m = i + x + y;
//	return m;
//}
//int main()
//{
//	int j = 4;
//	int m = 1;
//	int k;
//	k = fun(j, m);
//	printf("%d\n", k);
//	k = fun(j, m);
//	printf("%d\n", k);
//	return 0;
//}

//int Count(unsigned int x)
//{
//	int num = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == 1)
//		{
//			num++;
//		}
//	}
//	return num;
//}
//int main()
//{
//	unsigned int x;
//	scanf("%d", &x);
//	int count = Count(x);
//	printf("%d\n", count);
//	return 0;
//}