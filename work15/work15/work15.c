#define _CRT_SECURE_NO_WARNINGS 1

////作业内容
////调整数组使奇数全部都位于偶数前面。
////题目：
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 0 };
//	int n = 0;
//	int m = 9;
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			arr1[m] = arr[i];
//			m--;
//		}
//		else
//		{
//			arr1[n] = arr[i];
//			n++;
//		}
//	}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//
//	return 0;
//}


////作业内容
////模拟实现库函数strcpy
//
//
//#include<stdio.h>
//#include<assert.h>
//
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}





////作业内容
////模拟实现库函数strlen
//
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//    assert(str != NULL);
//    int count = 0;
//    while (*str)
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//int main()
//{
//    char str[] = "abcdef";
//    int len = my_strlen(str);
//    printf("%d", len);
//    return 0;
//}


