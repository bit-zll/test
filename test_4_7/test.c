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
//	test(arr);//ָ������Ҳ����
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
//������1
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("��������������>");
//			scanf("%d%d", &x, &y);
//			int ret = p[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}
//������2
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
//	printf("������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
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
//			printf("�˳�\n");
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
// return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	//ppfArr��һ��ָ��[����ָ������]��ָ��
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//
//	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
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