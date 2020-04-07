#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* pc = 'asdf';
//	int* arr[10];
//	char* arr1[5];
//	int arr2[10] = { 0 };
//	int(*pa)[10] = &arr2;
//	return 0;
//}
//void test(int arr[3][5])
//{
//
//}
//void test1(int arr[][5])
//{
//
//}
//void test2(int(*p)[5])
//{
//
//}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//	return 0;
//}
//void test1(int* p)
//{
//
//}
//void test2(char* ch)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	test1(&a);
//	test1(p);
//	char b = 'w';
//	char* ch = &b;
//	test2(&b);
//	test2(ch);
//	return 0;
//}
//void test(int** p)
//{
//
//}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(pp);
//	test(&ptr);
//	int* arr[10] = { 0 };
//	test(arr);//指针数组也可以
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//	int(*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	return 0;
//}
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	p("hello bit");
//	return 0;
//}
//计算器1
//void menu()
//{
//	printf("*******************\n");
//	printf("**1.add     2.sub**\n");
//	printf("**3.mul     4.div**\n");
//	printf("**    0.exit     **\n");
//	printf("*******************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*p[])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个数：>");
//			scanf("%d%d", &x, &y);
//			int ret = p[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//计算器2
//void menu()
//{
//	printf("*******************\n");
//	printf("**1.add     2.sub**\n");
//	printf("**3.mul     4.div**\n");
//	printf("**5.xor     0.exit**\n");
//	printf("*******************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x^y;
//}
//int Calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("退出\n");
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
// return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	//ppfArr是一个指向[函数指针数组]的指针
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//
//	//ppfArr 是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
//	//
//	return 0;
//}
void print(char* str)
{
	printf("hello:%s\n", str);
}
void test(void(*p)(char*))
{
	printf("hehe\n");
	p("bit");
}
int main()
{
	test(print);
	return 0;
}