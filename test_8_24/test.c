#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&arr + 1);
//	printf("%d %d\n", *(arr + 1), *(ptr - 1));
//	return 0;
//}

//int main()
//{
//	unsigned short sht = 0;
//	sht--;
//	printf("%d", sht);
//	return 0;
//}

//int main()
//{
//	char ch;
//	ch = 'B' + '8' - '3';
//	printf("%c", ch);
//	return 0;
//}

//int my_pow(int x, int y)
//{
//	int count = 1;
//	if (y == 0)
//		return 1;
//	else
//	{
//		int n = 1;
//		while (count <= y)
//		{
//			n *= x;
//			count++;
//		}
//		return n;
//	}
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int ret = my_pow(x, y);
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	double sum = 0.0;
	for (int i = 1000; i >=1; i--)
	{
		sum += log10(i);
	}
	printf("%d\n", (int)sum);//2567
	return 0;
}