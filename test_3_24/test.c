#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("ret = %d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
//int COUNT(int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = COUNT(num);
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("before:a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after;a=%d b=%d\n", a, b);
//	return 0;
//}
//void print()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int*p = &arr;
//	while (p<arr+6)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//}
//int main()
//{
//	print();
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	scanf("%d", &num);
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	for (i = 0, j = 0; j < 16; i += 2, j++)
//	{
// 		arr1[15 - j] = (num >> i) & 1;
//	}
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 1, j = 0; j < 16; i += 2, j++)
//	{
//		arr2[15 - j] = (num >> i) & 1;
//	}
//	for (i = 0; i < 16; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int x = 0;
//	int y = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	for (i = 0; i < 32; i++)
//	{
//		x = (a >> i) & 1;
//		y = (b >> i) & 1;
//		if (x!=y)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}