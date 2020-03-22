#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Mul(int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			k = i*j;
			printf("%d*%d=%d", i, j, k);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Mul(n);
	return 0;
}
//int Power(int n)
//{
//	return n*Power(n);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Power(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int DigitSum(int n)
//{
//	int sum = 0;
//	int m = 0;
//	if (n != 0)
//	{
//		m = n % 10;
//		n = n / 10;
//		sum = m + DigitSum(n);
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//void reverse_string(char*string)
//{
//	if (*string == '\0')
//	{
//		printf("%c\n", *string);
//	}
//	else
//	{
//		reverse_string(++string);
//		printf("%c", *(--string));
//	}
//}
//int main()
//{
//	char arr[] = { 0 };
//	scanf("%s", &arr);
//	reverse_string(arr);
//	return 0;
//}