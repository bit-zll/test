#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int main()
//{
//	int m = 0;
//	int t = 0;
//	int e = 0;
//	scanf("%d", &m);
//	e = m;
//	t = m;
//	while (e > 1)
//	{
//		t = t + e / 2;
//		e = e / 2 + e % 2;
//	}
//	printf("%d", t);
//	return 0;
//}
#include<assert.h>
//int my_strlen(const char*str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//char*my_strcpy(char*dest, const char*src)
//{
//	char*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "#####";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//void change(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		if ((left < right) && (arr[left] % 2) == 0)
//		{
//			left++;
//		}
//		if ((left < right) && (arr[right] % 2) == 1)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	change(arr,sz);
//	print(arr, sz);
//	return 0;
//}