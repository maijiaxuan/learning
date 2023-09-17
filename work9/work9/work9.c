#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////作业内容
////创建一个整形数组，完成对数组的操作
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
//
//#define n 10
//
//void init(int* arr,int len)
//{
//	int i = 0;
//	while (arr + i < arr + len)
//	{
//		*(arr + i) = 0;
//		i++;
//	}
//}
//
//void print(int* arr,int len)
//{
//	int i = 0;
//	while (arr + i < arr + len)
//	{
//		printf("%d ", *(arr + i));
//		i++;
//	}
//	printf("\n");
//}
// 
// 
//void reverse(int *arr,int len)
//{
//	int* left = arr;
//	int* right = arr + len - 1;
//
//
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
//	int len = n;
//
//	reverse(arr, len);
//	print(arr, len);
//
//	init(arr,len);
//	print(arr, len);
//
//	return 0;
//}




////作业内容
////实现一个对整形数组的冒泡排序
//
//void sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


