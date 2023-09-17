#define _CRT_SECURE_NO_WARNINGS 1

//杨氏矩阵
//作业内容
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);


//#include<stdio.h>
//
//int find_num()
//{
//
//
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int a=1;
//	for(int i = 0;i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			arr[i][j] = a;
//			a++;
//		}
//	
//	}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	for (int j = 0; j < 10; j++)
//	//	{
//	//		printf("%d	", arr[i][j]);
//	//	}
//	//	printf("\n");
//
//	//}
//
//	return 0;
//}


#include<stdio.h>

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}