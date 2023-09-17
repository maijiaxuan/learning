#define _CRT_SECURE_NO_WARNINGS 1

////编写程序数一下 1到 100 的所有整数中出现多少个数字9
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



////完成上课的猜数字游戏
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
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("猜对了\n");
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
//		printf("请输入数字(1/0)>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//		}
//
//	} while (input);
//	return 0;
//}


//二分查找
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

#include<stdio.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	printf("请输入要查找的数:>");
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
			printf("下标为：%d\n", mid);
			flag = 1;
			break;
		}
	}

	if (flag == 0)
		printf("找不到\n");

	return 0;

}