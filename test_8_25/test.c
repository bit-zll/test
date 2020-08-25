#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 2) += 2;
//	printf("%d %d\n", *pulPtr, *(pulPtr + 2));
//	return 0;
//}

//int main()
//{
//	char *szStr = "abcde";
//	szStr += 2;
//	printf("%lu\n", szStr);
//	return 0;
//}

//int main()
//{
//	char acNew[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		acNew[i] = '0';
//	}
//	printf("%d\n", strlen(acNew));
//	return 0;
//}

//void foo(int b[][3])
//{
//	++b;
//	b[1][1] = 9;
//}
//int main()
//{
//	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	foo(a);
//	printf("%d", a[2][1]);
//	return 0;
//}

//int main()
//{
//	int x = 0, y = 0, z = 0;
//	z = (x == 1) && (y = 2);
//	printf("%d ", y);
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	long long t = sizeof(i++);
//	printf("%d ", i);
//	return 0;
//}

typedef struct
{
	int x;
	int y;
}A;
A Array;
void FindIndex(int* arr, int k,int n)
{
	int sum = 0;
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		sum = arr[left] + arr[right];
		if (sum < k)
			left++;
		else if (sum > k)
			right--;
		else
		{
			Array.x = left;
			Array.y = right;
			break;
		}
	}
}
int main()
{
	int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = sizeof(array) / sizeof(array[0]);
	int k;
	scanf("%d", &k);
	FindIndex(array, k, n);
	printf("%d %d\n", Array.x, Array.y);
	return 0;
}