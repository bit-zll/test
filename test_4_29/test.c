#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>

//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��,��Ӧ�û�������ϵͳ
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
	//���ҵ��������������Ľ��
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (sum & 1 << i)
		{
			pos = i;
			break;
		}
	} //���ҵ��з����һλ������һλ�ϣ�������һ����һ��1һ��0
	*pnum1 = *pnum2 = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] & 1 << pos)
		{
			*pnum1 ^= arr[i]; //��һλ��1�ģ�������1��
		}
		else
		{
			*pnum2 ^= arr[i]; //��һλ��0�ģ�������2��
		}
	}
}
