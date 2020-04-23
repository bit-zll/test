#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{	
//	//int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[5] = { 0 };
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr3, arr3 + 2, 20);
//	return 0;
//}
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00
//	//01 00 00 00 02 00 00 00 04 00 00 00
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 4, 5, 6 };
//	int ret = memcmp(arr1, arr2, 9);//比较第9个字节
//	printf("%d\n", ret);
//	return 0;
//}
int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	return 0;
}