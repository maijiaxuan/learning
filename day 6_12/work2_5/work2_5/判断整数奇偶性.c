#define _CRT_SECURE_NO_WARNINGS 1
//����
//KiKi��֪��һ����������ż�ԣ�������жϡ��Ӽ�����������һ����������Χ - 231~231 - 1��������ж�������ż�ԡ�
//�����������������룬ÿ���������һ��������
//������������ÿ�����룬���������������Odd������ż����Even����
//ʾ��1
//���룺4
//      7
//�����Even
//      Odd
#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n % 2 == 1)
			printf("Odd\n");
		else
			printf("Even\n");
	}
	return 0;
}