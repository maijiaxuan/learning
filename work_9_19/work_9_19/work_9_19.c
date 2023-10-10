#define _CRT_SECURE_NO_WARNINGS 1

//
////模拟实现memcpy
//
//#include<stdio.h>
//#include<string.h>
//
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	int* p = dest;
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//
//	return p;
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "efgh";
//	char* p = my_memcpy(arr1,arr2,4);
//	printf("%s\n", p);
//
//	int arr3[] = { 1,2,3,4 };
//	int arr4[] = { 5,6,7,8 };
//	int *k= my_memcpy(arr3, arr4, 16);
//	for (int i = 1; i <= 4; i++)
//	{
//		printf("%d ", *k);
//		k++;
//	}
//	return 0;
//}


//模拟实现memmove


#include<stdio.h>
#include<string.h>

void* my_memmove(void* dest, void* src, size_t num)
{
	int* p = dest < src ? dest: src;
	if (dest < src)//前--->后
	{
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}

	}
	else//后--->前
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}

	}
	return p;
}



int main()
{
	char arr[] = "abcdefgh";

	char* p = my_memmove(arr+2, arr, 2);
	printf("%s", p);
	return 0;
}