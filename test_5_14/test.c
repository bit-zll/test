#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//int main()
//{
//	//offsetof¼ÆËãÆ«ÒÆÁ¿
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}
//#include "add.h"
//int main()
//{
//	int ret = Add(2, 3);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//#define DEBUG 0
//int main()
//{
//#ifdef DEBUG
//	printf("hehe\n");
//#endif
//
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//	return 0;
//}

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("hihi\n");
//#endif
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1+1
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//#define DEBUG
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;

//#define MAX 100
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = MALLOC(10, int);
//	return 0;
//}
//int Max1(int x, int y)
//{
//	return (x > y ? x : y);
//}
//float Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int max = Max1(a, b);
//	printf("%d\n", max);*/
//	float c = 3.0f;
//	float d = 4.0f;
//	float max = Max2(c, d);
//	printf("%f\n", max);
//	return 0;
//}
#define MAX(X,Y)((X)>(Y)?(X):(Y))
int main()
{
	int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("%d\n", max);
	return 0;
}