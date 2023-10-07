#define _CRT_SECURE_NO_WARNINGS 1

////模拟实现strlen
//
//#include<stdio.h>
//
//int my_strlen(const char*arr)
//{
//	int sz = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		sz++;
//	}
//	return sz;
//
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//}
////int my_strlen(const char* arr)
////{
////	static int sz = 0;
////	if (*arr != '\0')
////	{
////		sz++;
////		return my_strlen(arr+1);
////	}
////	else
////	{
////		return sz;
////	}
////
////}




//模拟实现strcpy





#include<stdio.h>

char* my_strcpy(char*arr1, const char* arr2)
{
	char* p = arr1;
	while (*arr2 != '\0')
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	return p;
}

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdefg";
	char*p=my_strcpy(arr1,arr2);
	printf("%s\n", p);
	return 0;
}