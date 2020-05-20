#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�

//��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣

//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�


//int removeElement(int* nums, int numsSize, int val)
//{
//	int i = 0,count=0;
//
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == val)
//		{
//			count++;
//		}
//		else
//		{
//			nums[i - count] = nums[i];
//		}
//	}
//	return numsSize - count;
//}
//int main()
//{
//	int arr[8] = { 0, 1, 2, 2, 3, 0, 4, 2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = removeElement(arr, sz, 2);
//	printf("%d\n", ret);
//	int i = 0;
//	for (i = 0; i < ret; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//����һ���������飬����Ҫ��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�

//int removeDuplicates(int* nums, int numsSize)
//{
//	int count = 0, i = 0;
//	for (i = 1; i <= numsSize; i++)
//	{
//		if (nums[count] != nums[i])
//		{
//			nums[++count] = nums[i];
//		}
//	}
//	return count;
//}
//int main()
//{
//	int arr[10] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = removeDuplicates(arr, sz);
//	printf("%d\n", ret);
//	int i = 0;
//	for (i = 0; i < ret; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�������������������� nums1 �� nums2�����㽫 nums2 �ϲ��� nums1 �У�ʹ nums1 ��Ϊһ���������顣

//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int index = m + n - 1;
//	while (n > 0)
//	{
//		if (m > 0&&nums1[m - 1] > nums2[n - 1])
//		{
//			nums1[index--] = nums1[m - 1];
//			m--;
//		}
//		else
//		{
//			nums1[index--] = nums2[n - 1];
//			n--;
//		}
//	}
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 0, 0, 0 };
//	int arr2[] = { 2, 5, 6 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	merge(arr1, sz1, 3, arr2, sz2, 3);
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//쳲���������
//unsigned long long Fib(int N)
//{
//	unsigned long long first = 1, second = 1;
//	unsigned long long ret = 1;
//	for (int i = 2; i < N; i++)
//	{
//		ret = first + second;
//		first = second;
//		second = ret;
//	}
//	return ret;
//}
//int main()
//{
//	printf("%d\n", Fib(10));
//	return 0;
//}

//�ϲ����飨����ռ䣩
int* MergeData(int arr1[], int sz1, int arr2[], int sz2)
{
	int index1 = 0, index2 = 0, index = 0;
	int* arr = (int*)malloc((sz1 + sz2)*sizeof(arr1[0]));
	while (index1 < sz1&&index2 < sz2)
	{
		if (arr1[index1] <= arr2[index2])
		{
			arr[index++] = arr1[index1++];
		}
		else
		{
			arr[index++] = arr2[index2++];
		}
	}
	while (index1 < sz1)
	{
		arr[index++] = arr1[index1++];
	}
	while (index2 < sz2)
	{
		arr[index++] = arr2[index2++];
	}
	return arr;
}
int main()
{
	int arr1[] = { 1, 3, 8, 4 };
	int arr2[] = { 2, 6 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	int*p = MergeData(arr1, sz1, arr2, sz2);
	int i = 0;
	for (i = 0; i < sz1 + sz2; i++)
	{
		printf("%d ", p[i]);
	}
	free(p);
	p = NULL;
	return 0;
}
