#define _CRT_SECURE_NO_WARNINGS 1

////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//
//#include<stdio.h>
//int main() 
// {
//	int num=0;
//	for (int i = 1; i <= 100; i++)
//	{
//	
//		if (i / 10 == 9)
//		{
//			num++;
//		}
//		if (i % 10 == 9)
//		{
//			num++;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}



////����ϿεĲ�������Ϸ
//
//#include<stdio.h>
//
//void menu()
//{
//	printf("******************************\n");
//	printf("******     1.PLAY       ******\n");
//	printf("******     0.EXIT       ******\n");
//	printf("******************************\n");
//}
//
//void game() 
//{
//	int ret = rand() % 100 + 1;
//	int guess=0;
//	while(1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main() 
//{
//	srand((unsigned int)time(NULL));
//	int input=0;
//	do 
//	{
//		menu();
//		printf("����������(1/0)>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//		}
//
//	} while (input);
//	return 0;
//}


//���ֲ���
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	printf("������Ҫ���ҵ���:>");
	scanf("%d", &n);

	int num = sizeof(arr) / sizeof(arr[0]);
	int left= 0;
	int right = num - 1;

	int flag = 0;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
			left = mid + 1;
		else if (arr[mid] > n)
			right = mid - 1;
		else
		{
			printf("�±�Ϊ��%d\n", mid);
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf("�Ҳ���\n");

	return 0;

}