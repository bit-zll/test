#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; // ���������������ʵ����ȫ����
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
//	bubble_sort(arr, sz);    //arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
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
	printf("��ʼ������\n");
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
	printf("��ӡ����ÿ��Ԫ��\n");
	print(arr, sz);
	printf("\n");
	printf("����Ԫ�ص�����\n");
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