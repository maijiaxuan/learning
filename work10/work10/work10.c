#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��ҵ����
//������A�е����ݺ�����B�е����ݽ��н�����������һ����

#include<stdio.h>

void f(int a[], int b[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

int main()
{
	int a[4] = {1,2,3,4};
	int b[4] = {5,6,7,8};
	int i = 0;
	f(a, b, 4);
	printf("a[]:");
	for (i = 0; i < 4; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nb[]:");
	for (i = 0; i < 4; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}
