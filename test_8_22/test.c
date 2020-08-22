#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a = 2, *p1, **p2;
//	p2 = &p1;
//	p1 = &a;
//	a++;
//	printf("%d %d %d\n", a, *p1, **p2);
//	return 0;
//}

//int main()
//{
//	int k, j, s;
//	for (k = 2; k < 6; k++, k++)
//	{
//		s = 1;
//		for (j = k; j < 6; j++)
//			s += j;
//	}
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 6, 7, 8, 9, 10 };
//	int *ptr = arr;
//	*(ptr++) += 123;
//	printf("%d %d\n", *ptr, *(++ptr));
//	return 0;
//}

int Palindrome(int num)
{
	int new = 0;
	int old = 0;
	old = num;
	while (num > 0)
	{
		new = new * 10 + num % 10;
		num /= 10;
	}
	if (new == old)
		return 1;
	else
		return -1;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = Palindrome(num);
	if (ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}