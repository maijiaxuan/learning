#define _CRT_SECURE_NO_WARNINGS 1


////��ҵ����
////����������ʱ������������������������
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}



////��ҵ����
////дһ���������ز����������� 1 �ĸ�����
////
////���磺 15    0000 1111    4 �� 1
//
// #include<stdio.h>
// 
//void f(int num)
//{
//	int i = 0;
//	int count = 0;
//	i = 31;
//	while (i >= 0)
//	{
//		printf("%d ", (num >> i) & 1);
//		i--;
//	}
//	printf("\n");
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//			count++;
//	}
//	printf("%d��1\n", count);
//
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	f(num);
//	return 0;
//}


////��ҵ����
////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//
//#include <stdio.h>
//
//void f(int m)
//{
//	int i = 31;
//	printf("�����ƣ�");
//	while (i >= 0)
//	{
//		printf("%d ", (m >> i) & 1);
//		i--;
//	}
//	printf("\n����λ��");
//	for (i = 0; i <= 30; i += 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\nż��λ��");
//	for (i = 1; i <= 31; i += 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int num ;
//	scanf("%d", &num);
//	f(num);
//	return 0;
//}

//��ҵ����
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :1999 2299
//������� : 7

#include<stdio.h>

int f(int m, int n)
{
	int count = 0;
	int value = m ^ n;
	while (value != 0)
	{
		if ((value & 1) == 1)
		{
			count++;
		}
		value = value >> 1;
	}
	return count;
}
int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	int count = f(num1, num2);
	printf("%d", count);
	return 0;
}
