#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ����
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1

//         -
//        |  1               n<=2;
// f(n)= -|
//        |  f(n-1)+f(n-2)   n>2;
//         -


//�ݹ�
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

////�ǵݹ�
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






////��ҵ����
////��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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







////��ҵ����
////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////���룺1729�������19
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





//��ҵ����
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba

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








//��ҵ����
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen


////�ݹ�
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


////�ǵݹ�
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










////��ҵ����
////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//
////�ݹ�
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
//	printf("%d�Ľ׳�Ϊ%d\n",n, num);
//	return 0;
//}



////�ǵݹ�
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
//	printf("%d�Ľ׳�Ϊ%d\n", n, num);
//	return 0;
//}









////��ҵ����
////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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