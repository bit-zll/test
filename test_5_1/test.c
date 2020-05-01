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
enum State state = INVALID;//�Ϸ������һ�֣�����Ϊ�Ƿ����������жϽ�Ϊ����
int my_atoi(const char* str)
{
	long long ret = 0;
	int flag = 1;
	assert(str);
	if (*str == '\0')//�ж��Ƿ�Ϊ���ַ���
	{
		return 0;
	}
	while (isspace(*str))//�����հ��ַ�
	{
		str++;
	}
	if (*str == '+')//��������
	{
		str++;
	}
	else if (*str == '-')//��������
	{
		str++;
		flag = -1;
	}
	while (isdigit(*str))//��ʼת�������ַ�ֱ���������ַ�
	{
		ret = ret * 10 + (*str - '0')*flag;
		if ((ret > INT_MAX) || (ret < INT_MIN))//�ж��Ƿ�Խ��
		{
			return 0;
		}
		str++;
	}
	if (*str == '\0')//����ֹͣ
	{
		state = VALID;
		return (int)ret;
	}
	else            //�����������ַ�
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