#define _CRT_SECURE_NO_WARNINGS 1


////作业内容
////不允许创建临时变量，交换两个整数的内容
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



////作业内容
////写一个函数返回参数二进制中 1 的个数。
////
////比如： 15    0000 1111    4 个 1
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
//	printf("%d个1\n", count);
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


////作业内容
////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//
//#include <stdio.h>
//
//void f(int m)
//{
//	int i = 31;
//	printf("二进制：");
//	while (i >= 0)
//	{
//		printf("%d ", (m >> i) & 1);
//		i--;
//	}
//	printf("\n奇数位：");
//	for (i = 0; i <= 30; i += 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n偶数位：");
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

//作业内容
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299
//输出例子 : 7

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
