#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int Change(int* pX)
//{
//	int y = 8;
//	y = y - *pX;
//	pX = &y;
//	return 0;
//}
//int main()
//{
//	int xx = 3;
//	int* pY = &xx;
//	Change(pY);
//	printf("%d\n", *pY);
//	return 0;
//}

//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//int fun(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x&(x - 1);
//	}
//	return count;
//}
//int main()
//{
//	printf("%d\n", fun(2019));
//	return 0;
//}

//#define CIR(r) r*r
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int t;
//	t = CIR(a + b);
//	printf("%d\n", t);
//	return 0;
//}

//unsigned long g_ulGlobal = 0;
//void GlobalInit(unsigned long ulArg)
//{
//	ulArg = 0x01;
//	return;
//}
//void Test()
//{
//	GlobalInit(g_ulGlobal);
//	printf("%lu", g_ulGlobal);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//ListNode* FindKthToTail(ListNode* pListHead, int k)
//{
//	ListNode* p1 = pListHead;
//	ListNode* p2 = pListHead;
//	if (pListHead == NULL || k == 0)
//		return NULL;
//	while (k - 1 > 0)
//	{
//		if (p1->next != NULL)
//		{
//			p1 = p1->next;
//			k--;
//		}
//		else
//		{
//			printf("error\n");
//		}
//	}
//	while (p1->next != NULL)
//	{
//		p1 = p1->next;
//		p2 = p2->next;
//	}
//	return p2;
//}

//int fun(int a, int b)
//{
//	if (a > b)
//		return (a + b);
//	else
//		return (a - b);
//}
//int main()
//{
//	int x = 3, y = 8, z = 6, r;
//	r = fun(fun(x, y), 2 * z);
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b;
//	b = ++(a++);
//	printf("%d\n", b);
//	return 0;
//}
//int f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//}
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++)
//	{
//		k = f(a++);
//	}
//	printf("%d\n", k);
//	return 0;
//}

//int x = 3;
//void inc()
//{
//	static int x = 1;
//	x *= (x + 1);
//	printf("%d\n", x);
//	return;
//}
//int main()
//{
//	int i;
//	for (i = 1; i < x; i++)
//	{
//		inc();
//	}
//	return 0;
//}

//struct ListNode* reverse(struct ListNode* head)
//{
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = head;
//	struct ListNode* next = NULL;
//
//	while (cur)
//	{
//		next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}
