#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; // 本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);    //arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	printf("%d\n", *arr);
//	return 0;
//}
void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int arr[], int sz)
{
	int i = 0;
	int c = sz / 2;
	for (i = 0; i < c; i++)
	{
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr[sz - i-1];
		arr[sz - i-1] = tmp;
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("初始化数组\n");
	init(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
	printf("打印数组每个元素\n");
	print(arr, sz);
	printf("\n");
	printf("数组元素的逆置\n");
	reverse(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
//void Swap(int A[], int B[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//}
//int main()
//{
//	int A[] = {0};
//	int B[] = {0};
//	scanf("%d", &A);
//	scanf("%d", &B);
//	int i = 0;
//	int sz = sizeof(A) / sizeof(A[0]);
//	Swap(A, B, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}