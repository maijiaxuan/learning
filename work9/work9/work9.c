#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////��ҵ����
////����һ���������飬��ɶ�����Ĳ���
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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




////��ҵ����
////ʵ��һ�������������ð������
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


