#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};


//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	//�Ƚ�����������
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[5] = { 5.0, 4.0, 3.0, 2.0, 1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
//}
//void test3()
//{
//	struct Stu s[] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//qsort�÷���
// //��һ���������������������Ԫ�ص�ַ
// //�ڶ��������������������Ԫ�ظ���
// //�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
// //���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
// // ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ

//qsort����ԭ��
//void Swap(char*buff1, char*buff2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buff1;
//		*buff1 = *buff2;
//		*buff2 = tmp;
//		buff1++;
//		buff2++;
//	}
//}
//void bubble_sort(void*base, int sz, int width, int(*cmp)(void*e1, void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test5()
//{
//	struct Stu s[] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	return 0;
//}
int main()
{
	//һά����
	//int a[] = { 1, 2, 3, 4 };//4*4 = 16
	//printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�- 16
	//printf("%d\n", sizeof(a + 0));//4/8 - �����������ʾ��Ԫ�صĵ�ַ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*a)); //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
	//printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�صĵ�ַ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(a[1])); //4 - ��2��Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a)); //4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	//printf("%d\n", sizeof(*&a)); //16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
	//printf("%d\n", sizeof(&a + 1));//4/8 &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	//printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));//4/8 &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
	//�ַ�����
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr + 0));//���ֵ
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
	//printf("%d\n", sizeof(arr));//sizeof��������������С��6*1 = 6�ֽ�
	//printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8�ֽ�
	//printf("%d\n", sizeof(*arr)); //1 arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
	//printf("%d\n", sizeof(arr[1])); //1
	//printf("%d\n", sizeof(&arr)); //4/8 &arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
	return 0;
}