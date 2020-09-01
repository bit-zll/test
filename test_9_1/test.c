#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//int main()
//{
//	int x = 6, n = 5;
//	x += n++;
//	printf("%d\n", x);
//	return 0;
//}

//int Test(int x)
//{
//	if (x % 3 == 0 && x % 2 != 0)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int ret=Test(x);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int x = 4;
//	x += x *= x + x;
//	printf("%d\n", x);
//	return 0;
//}

//void Zip(char str[])
//{
//	int len = strlen(str);
//	int count = 1;
//	for (int i = 0; i < len; i++)
//	{
//		if (str[i + 1] == str[i])
//		{
//			count++;
//		}
//		else
//		{
//			if (count == 1)
//			{
//				printf("%c", str[i]);
//			}
//			else
//			{
//				printf("%d%c", count, str[i]);
//			}
//			count = 1;
//		}
//	}
//}
//int main()
//{
//	char str[256] = { 0 };
//	scanf("%s", str);
//	Zip(str);
//	return 0;
//}

//int main()
//{
//	char x[] = "China";
//	printf("%d\n", sizeof(x));
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

//int Func(int a)
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
//		k = Func(a++);
//	}
//	printf("%d\n", k);
//	return 0;
//}

//int main()
//{
//	int s = 0, n;
//	for (n = 0; n < 4; n++)
//	{
//		switch (n)
//		{
//		default:s += 4;
//		case 1:s += 1;
//		case 2:s += 2;
//		case 3:s += 3;
//		}
//	}
//	printf("%d\n", s);
//	return 0;
//}

//void Change(char* str)
//{
//	char* prev = str;
//	char* cur = str;
//	int len = strlen(str);
//	for (int i = 0; i < len; i++)
//	{
//		if (*cur == '*'&&*prev=='*')
//		{
//			cur++;
//		}
//		else
//		{
//			if (*(cur - 1) != '*'&&*prev=='*')
//			{
//				cur++;
//			}
//			else
//			{
//				*prev = *cur;
//				prev++;
//				cur++;
//			}
//		}
//	}
//	printf("%s\n", str);
//}
//int main()
//{
//	char str[256] = { 0 };
//	scanf("%s", &str);
//	Change(str);
//	return 0;
//}


void Deblank(char* str) 
{
	int flag = 0;	//代表没开始处理空格
	int p = 0;
	int i = 0;
	while (str[i]) 
	{
		//遇到空格 还没开始处理
		if (!flag && str[i] == ' ')
		{
			i++;
		}
		//遇到不是空格 还没开始处理
		else if (!flag && str[i] != ' ') 
		{
			flag = 1;
			str[p++] = str[i++];
		}
		//遇到空格 开始处理了
		else if (flag && str[i] == ' ') 
		{
			flag = 0;
			str[p++] = str[i++];
		}
		//遇到不是空格 开始处理了
		else //if(flag && str[i] != ' ')
		{
			flag = 1;
			str[p++] = str[i++];
		}
	}
	if (str[p - 1] == ' ') 
		str[p - 1] = '\0';
	else
		str[p] = '\0';
}

int main() 
{
	char array[] = "     as    adadq     ";
	Deblank(array);
	printf("%s\n",array);
	return 0;
}
