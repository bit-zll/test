#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print(&s);
//	return 0;
//}

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//enum Sex
//{
//	MALE,
//	FEMALE=10,
//	SECRET
//};
//int main()
//{
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);//0  10  11
//	return 0;
//}
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	//printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));//����һ��
//}
//int check_sys()
//{
//	int a = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return *(char*)&a;
//}
//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//	//int a = 0x11223344;
//	//
//	//�͵�ַ-------------------->�ߵ�ַ
//	//....[][][][][11][22][33][44][][][][][][][]...  ����ֽ���洢ģʽ
//	//....[][][][][44][33][22][11][][][][][][][]...  С���ֽ���洢ģʽ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
//	//

//enum S
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum S s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//union Un
//{
//	int a;
//	char arr[5];
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}
union Un
{
	int a;//4 8 4
	char arr[5];//5 1 8 1
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}