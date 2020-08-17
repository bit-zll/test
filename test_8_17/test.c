#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//int global = 2019;//全局变量 
//int main()
//{
//	int local = 2018;//局部变量    //下面定义的global会不会有问题？    
//	int global = 2020;//局部变量    
//	printf("global = %d\n", global);
//	return 0; 
//}

//int main()
//{
//	int y = 10;
//	int x = y++;
//	printf("%d %d\n", x, y);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	if ((++i > 0) || (++j > 0))
//	{
//		printf("i=%d,j=%d\n", i, j);
//	}
//	return 0;
//}

//#define MOD(x,y) x%y
//int main()
//{
//	int a = 13, b = 94;
//	printf("%d\n", MOD(b, a + 4));
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	switch (++x)
//	{
//	case 0:
//		++x;
//	case 1:
//		++x;
//		break;
//	case 2:
//		++x;
//	}
//	printf("%d\n", x);
//	return 0;
//}

void Swap(int* left, int* right)
{
	int temp = *left;
	*left = *right;
	*right = temp;
}
void BubbleSort(int a[], int k)
{
	int flag = 0;
	for (int i = 0; i < k - 1; i++)
	{
		flag = 0;
		for (int j = 0; j < k - 1 - i;j++)
		{
			if (a[j]>a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
				flag = 1;
			}
		}
		if (!flag)
			return;
	}
}
//int main()
//{
//	int a[] = { 5, 3, 4, 7, 8, 1, 6 };
//	int k;
//	scanf("%d", &k);
//	BubbleSort(a, k);
//	printf("%d\n", a[0]);
//	return 0;
//}


//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}

//int main()
//{
//	int s = 0, n;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default:s += 4;
//		case 1:s += 1;
//		case 2:s += 2;
//		case 3:s += 3;
//		}
//	}
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	char* pcColor = "blue1";
//	char acColor[] = "blue1";
//	printf("%d\n", strlen(pcColor));
//	printf("%d\n", strlen(acColor));
//	printf("%d\n", sizeof(pcColor));
//	printf("%d\n", sizeof(acColor));
//	return 0;
//}

//int main()
//{
//	unsigned long ulA = 0x11000000;
//	printf("%x\n", *(unsigned char*)&ulA);
//	return 0;
//}

int FindNumber(int array[], int lenth)
{
	BubbleSort(array, lenth);
	return array[lenth / 2];
}
int main()
{
	int array[] = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	int lenth = sizeof(array)/sizeof(array[0]);
	int num = FindNumber(array, lenth);
	printf("%d\n", num);
	return 0;
}