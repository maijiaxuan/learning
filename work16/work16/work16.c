#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//
//}

//#include<stdio.h>

//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}








////��ҵ����
////5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
////Aѡ��˵��B�ڶ����ҵ�����
////Bѡ��˵���ҵڶ���E���ģ�
////Cѡ��˵���ҵ�һ��D�ڶ���
////Dѡ��˵��C����ҵ�����
////Eѡ��˵���ҵ��ģ�A��һ��
////����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d < 5; d++)
//				{
//					for (e = 1; e < 5; e++)
//					{
//						if (a * b * c * d * e == 120)
//						{
//							if (((b == 2) + (a == 3) == 1) &&
//								((b == 2) + (e == 4) == 1) &&
//								((c == 1) + (d == 2) == 1) &&
//								((c == 5) + (d == 3) == 1) &&
//								((e == 4) + (a == 1) == 1))
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}




////�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
////����Ϊ4�����ɷ��Ĺ���:
////A˵�������ҡ�
////B˵����C��
////C˵����D��
////D˵��C�ں�˵
////��֪3����˵���滰��1����˵���Ǽٻ���
////�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//
//
//
//#include<stdio.h>
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer < 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("������%c\n", killer);
//		}
//	}
//	return 0;
//}









//����Ļ�ϴ�ӡ������ǡ�
//   1
//  1 1
// 1 2 1
//1 3 3 1
//����



#include<stdio.h>

int main()
{
	int arr[20][20] = { 0 };
	int input = 0;

	scanf("%d", &input);
	int i = 0;
	int j = 0;

	for (i = 0; i < input; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (i = 3; i <= input; i++)
	{
		for (j = 1; j < i - 1; j++)
		{
			arr[i - 1][j] = arr[i - 1 - 1][j] + arr[i - 1 - 1][j - 1];
		}
	}
	for (i = 0; i < input; i++)
	{
		for (j = 0; j < input - i; j++)
			printf("   ");

		for (j = 0; j <= i; j++)
		{
			printf("%5d ", arr[i][j]);
		}
		printf("\n");

	}
	return 0;
}