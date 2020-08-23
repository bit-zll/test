#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char a[] = "123456789", *p = a;
//	int i = 0;
//	while (*p)
//	{
//		if (i % 2 == 0)*p = '!';
//		i++; p++;
//	}
//	puts(a);
//	return 0;
//}

//int main()
//{
//	char str[] = "ABCDEFG";
//	char *p1, *p2;
//	p1 = "abcd"; p2 = "efgh";
//	strcpy(str + 1, p2 + 1);
//	strcpy(str + 3, p1 + 3);
//	printf("%s\n", str);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0xFFFFFFF7;
//	unsigned char i = (unsigned char)a;
//	char* b = (char*)&a;
//	printf("%08x,%08x", i, *b);
//	return 0;
//}

//int main()
//{
//	int j = 4;
//	int i = j;
//	for (; i <= 2 * j; i++)
//	{
//		switch (i / j)
//		{
//		case 0:
//		case 1:
//			printf("*");
//			break;
//		case 2:
//			printf("#");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x = 1, y = 012;
//	printf("%d\n", y*x++);
//	return 0;
//}

//struct ListNode* middleNode(struct ListNode* head)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//	while (fast&&fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return slow;
//}