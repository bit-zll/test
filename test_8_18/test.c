#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//void Func(char str_arg[2])
//{
//	int m = sizeof(str_arg);
//	int n = strlen(str_arg);
//	printf("%d\n", m);
//	printf("%d\n", n);
//}
//int main()
//{
//	char str[] = "hello";
//	Func(str);
//	return 0;
//}

//int main()
//{
//	int a, x;
//	for (a = 0, x = 0; a <= 1 && !x++; a++)
//	{
//		a++;
//	}
//	printf("%d %d\n", a, x);
//
//	printf("%d\n", !2);   
//	printf("%d\n", !0);
//	return 0;
//}

//#define Min(a,b) a<b?a:b

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	int* p3 = (int*)(a + 1);
//	printf("%d %x %d\n", p1[-1], p2[0], p3[1]);
//	return 0;
//}

//int Find(int* p, int n)
//{
//	int max = 0, temp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (temp <= 0)
//			temp = p[i];
//		else
//			temp += p[i];
//		if (max < temp)
//			max = temp;
//	}
//	return max;
//}
//int main()
//{
//	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", Find(arr, n));
//	return 0;
//}

//int main()
//{
//	char* str[3] = { "stra", "strb", "strc" };
//	char* p = str[0];
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%s ", p++);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int x[] = { 1, 2, 3, 4, 5, 6 };
//	int* p = x;
//	int a = p += 2, *p++;
//	printf("%d\n", a);
//	return 0;
//}

//char* myString()
//{
//	char buffer[6] = { 0 };
//	char *s = "Hello World!";
//	for (int i = 0; i < sizeof(buffer)-1; i++)
//	{
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//int main()
//{
//	printf("%s\n", myString());
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	printf("%d %d\n", sizeof(i++), i);
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}

//char* Find(char* p)
//{
//	char* cur = p + 1;
//	char* prev = p;
//	while (cur)
//	{
//		if (*prev != *cur)
//		{
//			cur++;
//		}
//		else
//		{
//			prev++;
//		}
//	}
//	return prev;
//}
//int main()
//{
//	char* str = "abaccdeff";
//	char* ret = Find(str);
//	printf("%c\n", *ret);
//	return 0;
//}

char firstsingle(char *arr)
{
	char asc[255] = { 0 };
	int i = 0;

	for (; arr[i] != '\0'; i++)
	{
		asc[arr[i]]++;
	}
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (asc[arr[i]] == 1)
		{
			return arr[i];
		}
	}
	return '\0';
}


int main()
{
	char arr[10];
	char ret;
	scanf("%s", &arr);
	ret = firstsingle(arr);
	printf("%c\n", ret);
	return 0;
}