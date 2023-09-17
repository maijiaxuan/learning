#define _CRT_SECURE_NO_WARNINGS 1

////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
//
//#include<stdio.h>
//
//void left_move(char* str, int k)
//{
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int k;
//	
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}




//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC


#include<stdio.h>
#include<string.h>
void left_move(char* str, int k)
{
	while (k != 0)
	{
		char* cur = str;
		char tmp = *cur;
		while ((*(cur + 1)) != '\0')
		{
			*cur = *(cur + 1);
			cur++;
		}
		*(cur) = tmp;
		k--;
	}
}
int Judge_string(char* str, const char* p)
{
	int i;
	if (strlen(str) != strlen(p))
	{
		return 0;
	}
	for (i = 1; i <= strlen(str); i++)
	{
		left_move(str, 1);
		if (strcmp(str, p) == 0)	
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[] = "AABCD";
	char str2[] = "BCDAA";
	printf("%d\n", Judge_string(str1, str2));
	return 0;
}
