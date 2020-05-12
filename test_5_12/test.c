#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log,txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d data:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define MAX 100
//#define STR "hehe"
//
//int main()
//{
//	int max = MAX;
//	printf("%d\n", max);
//	printf("%s\n", STR);
//	return 0;
//}

//#define SQUARE(X) (X)*(X)
//int main()
//{
//	int ret = SQUARE(5+1);
//	printf("%d\n", ret);
//	return 0;
//}

//#define MAX 100
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(MAX);
//	printf("%d\n", ret);
//	return 0;
//}

//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

#define CAT(X,Y) X##Y

int main()
{
	int Class84 = 2019;
	printf("%d\n", CAT(Class, 84));
	return 0;
}