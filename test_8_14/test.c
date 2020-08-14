#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 }, *q[4], k;
//	for (k = 0; k < 4; k++)
//	{
//		q[k] = &a[k * 3];
//	}
//	printf("%d\n", q[3][1]);
//	return 0;
//}

//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int FindNum(int (*arr)[4], int n)
//{
//	int row = 3;
//	int col = 0;
//	while (row >= 0 && col <= 3)
//	{
//		if (n < arr[row][col])
//			row--;
//		else if (n > arr[row][col])
//			col++;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[4][4] = { 1, 2, 8, 9, 2, 4, 9, 12, 4, 7, 10, 13, 6, 8, 11, 15 };
//	int num;
//	scanf("%d", &num);
//	if (FindNum(arr,num))
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

//int main()
//{
//	char str[10];
//	str = "string";
//	return 0;
//}

//int main()
//{
//	const char* p = "Hello!";
//	printf("%c\n", *p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a += a *= a -= a / 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	while (i < 10){
//		if (i < 1) continue;
//		if (i == 5) break;
//		i++;
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

void ChangeStr(char str[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (str[i] == ' ')
		{
			for (int j = 0; j < n - i; j++)
			{
				str[n + 1 - j] = str[n - 1 - j];
			}
			str[i] = '%';
			str[i + 1] = '2';
			str[i + 2] = '0';
			n += 2;
		}
	}
	str[n] = '\0';
}
void Print(char str[], int m)
{
	for (int j = 0; j < m; j++)
	{
		printf("%c", str[j]);
	}
	printf("\n");
}
int main()
{
	char str[] = "abc defgx yz";
	int n = strlen(str);
	ChangeStr(str, n);
	int m = strlen(str);
	Print(str, m);
	return 0;
}