#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";   //bit\0###
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	/*printf("max=%d\n", max);*/
//	max = get_max(5, get_max(3, 7));
//	printf("max=%d\n", max);
//	return 0;
//}
//void Swap1(int a, int b)    //传值调用
//{
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void Swap2(int*pa, int*pb)    //传址调用
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	int tmp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int is_leap_year(int i)
//{
//	if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap_year(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret = -1)
//	{
//		printf("没找到下标\n");
//	}
//	else
//	{
//		printf("找到了，下标是;%d\n", ret);
//	}
//	return 0;
//}
//void Add(int*num)
//{
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	printf("%d\n", strlen("abc"));
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//模拟实现了一个strlen函数
//int my_strlen(char*str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);    //arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}
int Fac(int i)
{
	if (i <= 1)
	{
		return 1;
	}
	else
		return i*Fac(i - 1);
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	int ret = Fac(i);
	printf("ret=%d\n", ret);
	return 0;
}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n); 
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//void test(int x)
//{
//	if (x < 10000)
//	{
//		test(x + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}
//int main()
//{
//	//char arr[] = "abcdef";
//	///*printf("%c\n", arr[3]);*/
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c\n", arr[i]);
//	//}
//	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}