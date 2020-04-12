#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//
//int findround(const char * src, char * find)
//{
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再连接一遍
//	return strstr(tmp, find) != NULL; //看看找不找得到
//}
//int main()
//{
//	char arr1[] = "ABCD";
//	char arr2[] = "ACBD";
//	int ret = findround(arr1,arr2);
//	printf("%d\n", ret);
//	return 0;
//}
//void leftround(char* src, int k)
//{
//	int i = 0;
//	int j = 0;
//	int sz = strlen(src);
//	k = k % sz;
//	for (i = 0; i < k; i++)
//	{
//		int tmp = src[0];
//		for (j = 0; j < sz - 1; j++)
//		{
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int sz = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	leftround(arr,k);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}
int findnum(int arr[3][3], int* px, int* py, int k)
{
	int row = 0;
	int col = *py - 1;
	while (col >= 0 && col < *py)
	{
		if (arr[row][col] == k)
		{
			*px = row;
			*py = col;
			break;
		}
		else if (arr[row][col]>k)
		{
			col--;
		}
		else
		{
			row++;
		}
	}
	if (arr[row][col] == k)
	{
		return 1;
	}
	if (arr[row][col] != k)
	{
		return 0;
	}
}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = 3;
	int y = 3;
	int k = 0;
	scanf("%d", &k);
	int ret = findnum(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("x=%d,y=%d", x, y);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}