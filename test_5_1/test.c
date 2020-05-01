#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

enum State
{
	VALID,//0
	INVALID//1
};
enum State state = INVALID;//合法情况就一种，先判为非法，接下来判断较为方便
int my_atoi(const char* str)
{
	long long ret = 0;
	int flag = 1;
	assert(str);
	if (*str == '\0')//判断是否为空字符串
	{
		return 0;
	}
	while (isspace(*str))//跳过空白字符
	{
		str++;
	}
	if (*str == '+')//跳过正号
	{
		str++;
	}
	else if (*str == '-')//跳过负号
	{
		str++;
		flag = -1;
	}
	while (isdigit(*str))//开始转换数字字符直到非数字字符
	{
		ret = ret * 10 + (*str - '0')*flag;
		if ((ret > INT_MAX) || (ret < INT_MIN))//判断是否越界
		{
			return 0;
		}
		str++;
	}
	if (*str == '\0')//正常停止
	{
		state = VALID;
		return (int)ret;
	}
	else            //遇到非数字字符
	{
		state = VALID;
		return (int)ret;
	}
}
int main()
{
	char* p = "  -12345abc678";
	int ret = my_atoi(p);
	if (state == VALID)
	{
		printf("%d\n", ret);//-12345
	}
	return 0;
}