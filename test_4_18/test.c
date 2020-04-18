#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1. 在str1字符串中追加一个str1字符串
//	strncat(str1, str1, 6);//abcdefabcdef
//	//2. 判断str2指向的字符串是否是str1指向的字符串的子串
//	char* ret = strstr(str1, str2);
//	if (ret = NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//杨氏矩阵
//题目内容：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
//

//1 2 3
//4 5 6
//7 8 9

//int findnumber(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int x = 3;
//	int y = 3;
//	int k = 0;
//	scanf("%d", &k);
//	int ret = findnumber(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("坐标是：%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}
#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest&&src);
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "cdferq";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	
	strncat(arr1, arr2, 3);
	printf("%s\n", arr1);

	return 0;
}