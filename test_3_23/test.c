#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	double a = 5 % 2;
//		printf("%lf", a);
//	return 0;
//}
//int main()
//{
//	int a = 5;//000000000000000000000101
//	int b = a << 2;//00000000000000000000000000010100
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b;//按位与
//	//int d = a | b;//按位或
//	int e = a^b;//按位异或
//	printf("%d\n",e);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int tmp = 0;//临时变量
//	printf("before:a=%d b=%d\n", a, b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	//加减法，可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//异或的方法
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	if (!a)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	a = -a;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	char b = 'r';
//	char*p = &a;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//	return 0;
//}
//int main()
//{
//	int arr1[10] = { 0 };//这种创建数组的方式，是数组有10个元素，把第一个元素初始化为0，其余元素默认初始化为0
//	int arr2[] = { 0 };//这种创建数组的方式，不直接指定数组的元素个数，次数数组根据初始化的内容，来指定元素个数
//	//因为{}中只有一个0，所以数组arr2中只有一个元素。
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	int b = a | (1 << 2);
//	printf("%d\n", b);
//	a = a & ~(1 << 2);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111  取反补码
//	//11111111111111111111111111111110  反码
//	//10000000000000000000000000000001  原码
//	printf("%d\n", ~a);//-1
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	/*int b = a++;*/
//	int b = ++a;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4   传过去是arr的首元素的地址，变量是指针，大小为4字节
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4    传过去是ch的首元素的地址，变量是指针，大小为4字节
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*/
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int max = 0;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct stu s1 = { "赵雷磊", 24, "1901210096" };
//	struct stu*ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	return 0;
//}
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//‭00000000000000000000000001111111
//	//‬01111111 - b
//	char c = a + b;
//	//a和b如何相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//
//	//10000010-c   符号位是1
//	//11111111111111111111111110000010 - 补码   符号位是1，就往前边补1
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110- 原码
//	//-126
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4   表达式运算的话就要整型提升
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a*b + a;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int*pa = &a;
//	*pa = 0;
//	char*pc = &a;
//	*pc = 0;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int*pa = &a;
//	char*pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
//int main()
//{
//	int a;
//	printf("%d\n", a);
//	return 0;
//}
//int*test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int a = 0;
//	int*p = test();
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}