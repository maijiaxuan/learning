#define _CRT_SECURE_NO_WARNINGS 1


////��ҵ����
////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
////�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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

////��ҵ����
////ʵ��һ�������������������������ݡ�
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



////��ҵ����
////ʵ�ֺ����ж�year�ǲ������ꡣ
//
//#include<stdio.h>
//
//int runnian(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		printf("%d��������\n",year);
//	}
//	else
//	{
//		printf("%d�겻������\n",year);
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


//��ҵ����
//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������

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