#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	char tele[12];
//};
//struct S s3//全局变量
//int main()
//{
//	struct S s1;
//	return 0;
//}
//结构体自引用
//struct NODE
//{
//	int data;
//	struct NODE* next;
//};
//typedef struct Node
//{
//	int a;
//	char b;
//	struct Node* next;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 'c', { 55.6, 30 }, 100, 3.14, "hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(s3));
//	printf("%d\n", sizeof(s4));
//	return 0;
//}
//设置默认对齐数位4
//#pragma pack(1)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8 4-4
//};
//#pragma pack()
////取消设置的默认对齐数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));
}