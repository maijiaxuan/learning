#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//

//#include<stdio.h>
//int  main() {
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}




////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
////arr��һ������һά���顣
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	int* p = &arr;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}




//
////дһ����������������һ���ַ��������ݡ�
//
//#include<stdio.h>
//#include<string.h>
//void f(char* str,int len)
//{
//	int left=0, right=len-1;
//	int tmp;
//	for (; left < right;left++,right--) {
//		tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//	}
//}
//int main()
//{
//	char str[] = { "abcde"};
//	int len = strlen(str);
//	f(str, len);
//	printf("%s", str);
//	return 0;
//}









////��C��������Ļ���������ͼ����
////              *
////			   ***
////            *****
////           *******
////          *********
////         ***********
////        *************
////		   ***********
////		    *********
////		     *******
////			  *****
////			   ***
////			    *
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 6; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (6 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}









////���0��100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}





//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	scanf("%d", &a);
	scanf("%d", &n);
	int sum = 0;
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		t = t * 10 + a;
		printf("%d", t);
		if (i <= n)
		{
			printf("+");
		}
		else
		{
			printf("=");
		}
		sum += t;
	}
	printf("%d\n", sum);
	return 0;
}
