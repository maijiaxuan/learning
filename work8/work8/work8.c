#define _CRT_SECURE_NO_WARNINGS 1

//作业内容
//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1

//         -
//        |  1               n<=2;
// f(n)= -|
//        |  f(n-1)+f(n-2)   n>2;
//         -


//递归
//#include<stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main() 
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}

////非递归
//#include<stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		int a = 1;
//		int b = 1;
//		int c;
//		while (n - 2 > 0)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}






////作业内容
////编写一个函数实现n的k次方，使用递归实现。
//
//#include<stdio.h>
//
//int my_pow(int n, int k)
//{
//	if (k==1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*my_pow(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int k;
//	scanf("%d", &k);
//	printf("%d", my_pow(n, k));
//}







////作业内容
////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////输入：1729，输出：19
//
//
//#include<stdio.h>
//
//int DigitSum(int n)
//{
//	if (n / 10 == 0)
//	{
//		return n % 10;
//	}
//	else
//	{
//		return DigitSum(n/10) + n % 10;
//	}
//
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//}





//作业内容
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba

#include<stdio.h>

int my_strlen(char* str)
{
	if (*str!='\0')
	{
		return my_strlen(str + 1) + 1;
	}
	else
	{
		return 0;
	}
}

void reverse_string(char s[])
{
	int len = my_strlen(s);
	char tmp = s[0];
	s[0] = s[len - 1];
	s[len - 1] = '\0';
	if (strlen(s + 1) >= 2)
	{
		reverse_string(s + 1);
	}
	s[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}








//作业内容
//递归和非递归分别实现strlen


////递归
//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	if (*str!='\0')
//	{
//		return my_strlen(str + 1) + 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char str[] = "abcde";
//	int len=my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}


////非递归
//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}










////作业内容
////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//
////递归
//#include<stdio.h>
//
//int jc(int n)
//{
//	if (n>1)
//	{
//		return jc(n - 1) * n;
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num = jc(n);
//	printf("%d的阶乘为%d\n",n, num);
//	return 0;
//}



////非递归
//#include<stdio.h>
//
//int jc(int n)
//{
//	int sum=1;
//	while (n >= 1)
//	{
//		sum *= n;
//		n--;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num = jc(n);
//	printf("%d的阶乘为%d\n", n, num);
//	return 0;
//}









////作业内容
////递归方式实现打印一个整数的每一位
//
//#include <stdio.h>
//
//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n ;
//	scanf("%d", &n);//1234
//	print(n);
//	return 0;
//}