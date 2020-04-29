#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候,就应该还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//char* my_strncpy(char* dest, const char* src, int n)
//{
//	int i = 0;
//	for (i = 0; src[i] && (i < n); i++)
//	{
//		dest[i] = src[i];
//	}
//	if (i < n)
//	{
//		dest[i] = 0;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "asdf";
//	my_strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strncat(char* dest,const char* src,int n)
//{
//	char* tmp = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	int i = 0;
//	for (i = 0; src[i] && (i < n); i++)
//	{
//		dest[i] = src[i];
//	}
//	dest[i] = 0;
//	return tmp;
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "asdf";
//	my_strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

void findTwoNum(int arr[], int n, int* pnum1, int* pnum2)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < 9; i++)
	{
		sum ^= arr[i];
	} 
	//先找到两个数互相异或的结果
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (sum & 1 << i)
		{
			pos = i;
			break;
		}
	} //再找到有分歧的一位。在这一位上，两个数一定是一个1一个0
	*pnum1 = *pnum2 = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] & 1 << pos)
		{
			*pnum1 ^= arr[i]; //这一位是1的，放在数1里
		}
		else
		{
			*pnum2 ^= arr[i]; //这一位是0的，放在数2里
		}
	}
}
