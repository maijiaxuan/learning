#define _CRT_SECURE_NO_WARNINGS 1

////��ҵ����
////��������ʹ����ȫ����λ��ż��ǰ�档
////��Ŀ��
////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
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


////��ҵ����
////ģ��ʵ�ֿ⺯��strcpy
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





////��ҵ����
////ģ��ʵ�ֿ⺯��strlen
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


