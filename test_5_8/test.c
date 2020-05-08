#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//struct S
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S)+10 * sizeof(int));
//	p->n = 100;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
#include <errno.h>
#include <string.h>
//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//..表示上一级路径
//	//. 表示当前路径
//	//fopen("../../test.txt","r")
//	//fopen("test.txt","r");
//
//	//绝对路径
//	//fopen（E:\\c++\\code\\test_5_8\\test_5_8\\test.txt","r");
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//  //写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//  //关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}

int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}