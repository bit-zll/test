#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
//int main()
//{
//	int i = 6;
//	if (i <= 6)
//		printf("hello\n");
//	else
//		printf("bye-bye\n");
//	return 0;
//}

//int main()
//{
//	char ch = -1;
//	printf("%d\n", ch);
//	return 0;
//}

//int main()
//{
//	double a = 10 / 4 * 4;
//	printf("%lf\n", a);
//	return 0;
//}

//int main()
//{
//	int i, x, y;
//	i = x = y = 0;
//	do{
//		++i;
//		if (i % 2)
//			x += i,i++;
//		y += i++;
//	} while (i <= 7);
//	printf("%d %d %d", i, x, y);
//	return 0;
//}

int Judge(int n)
{
	double a = log2(n);
	if (a == (int)a)
		return 1;
	else
		return -1;
}
int main()
{
	int n;
	scanf("%d", &n);
	int ret = Judge(n);
	if (ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}