#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char*s1 = NULL;
//	char*s2 = NULL;
//	char*cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1&&*s2&&(*s1 == *s2))
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
//void* my_memmove(void* dest, const void* src, size_t n)
//{
//	assert(dest);
//	assert(src);
//	char* p1 = (char*)dest;
//	const char* p2 = (char*)src;
//	if (dest >= src&&p1 < p2 + n)
//	{
//		for (size_t i = n - 1; i>0; --i)
//		{
//			p1[i] = p2[i];
//		}
//		return dest;
//	}
//}