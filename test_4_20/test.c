#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcddr";
//	//int ret = strcmp(p1,p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while (*s1&&*s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串没找到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "524183259@qq.com";
//	char* p = "@.";
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
#include <ctype.h>

//int main()
//{
//	//char ch = '2';
//	//int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	char ch = tolower('Q');
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	int ret = strlen(arr);
//	for (i = 2; i <= ret;i++)
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}
struct S
{
	char name[20];
	int age;
};
void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;

}
int main()
{
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr2[5] = { 0 };
	struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
	struct S arr4[3] = { 0 };
	my_memcpy(arr4, arr3, sizeof(arr3));
	return 0;
}