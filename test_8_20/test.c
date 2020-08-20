#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int fun(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return (p - s);
//}
//int main()
//{
//	printf("%d\n", fun("goodbye!"));
//}

//int main()
//{
//	int arr[4] = { 1 };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	unsigned char a = 0xA5;
//	unsigned char b = ~a >> (4 + 1);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	const int i = 0;
//	int* j = (int*)&i;
//	*j = 1;
//	printf("%d %d", i, *j);
//	return 0;
//}

//char FindFirstRepeat(char A[], int n)
//{
//	int hash_arr[255] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		if (hash_arr[A[i]] == 0)
//			hash_arr[A[i]] = 1;
//		else
//			return A[i];
//	}
//}
//int main()
//{
//	char arr[] = "qywyer23tdd";
//	int n = strlen(arr);
//	printf("%c\n", FindFirstRepeat(arr,n));
//	return 0;
//}

//int main()
//{
//	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int* p = a;
//	printf("%d\n", a[10]);
//	return 0;
//}

//int f(int x, int y)
//{
//	return (x&y) + ((x^y) >> 1);
//}
//int main()
//{
//	int result = f(2, 4);
//	printf("%d\n", result);
//	return 0;
//}

//void fun(int x, int y, int* c, int* d)
//{
//	*c = x + y;
//	*d = x - y;
//}
//int main()
//{
//	int a = 4, b = 3, c = 0, d = 0;
//	fun(a, b, &c, &d);
//	printf("%d %d\n", c, d);
//	return 0;
//}

