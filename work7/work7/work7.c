#define _CRT_SECURE_NO_WARNINGS 1


////作业内容
////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
////如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//
//#include<stdio.h>
//
//int cfb(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%d	", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	cfb(n);
//	return 0;
//}

////作业内容
////实现一个函数来交换两个整数的内容。
//
//#include<stdio.h>
//
//void Swap(int *a,int *b)
//{
//	int k=0;
//	k = *a;
//	*a = *b;
//	*b = k;
//}
//
//int main()
//{
//	int a;
//	int b;
//	scanf("%d %d", &a, &b);
//	Swap(&a,&b);
//	printf("%d %d", a, b);
//	return 0;
//}



////作业内容
////实现函数判断year是不是润年。
//
//#include<stdio.h>
//
//int runnian(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		printf("%d年是闰年\n",year);
//	}
//	else
//	{
//		printf("%d年不是闰年\n",year);
//
//	}
//}
//
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	runnian(year);
//
//	return 0;
//}


//作业内容
//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。

#include<stdio.h>

int  is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}