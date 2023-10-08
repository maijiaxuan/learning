#define _CRT_SECURE_NO_WARNINGS 1

////模拟实现strcmp
//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//int my_strcmp(const char *s1,const char *s2)
//{
	//assert(s1, s2);
//	while(*s1==*s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//		return *s1 - *s2;
//}
//
//
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcc";
//
//	int k = my_strcmp(arr1,arr2);
//	if (k > 0)
//	{
//		printf("大于\n");
//	}
//	else if (k == 0)
//	{
//		printf("等于\n");
//	}
//	else
//	{
//		printf("小于\n");
//
//	}
//}




////模拟实现strcat
//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//
//char* my_strcat(char* s1,const char*s2)
//{
//	assert(s1, s2);
//	char* p = s1;
//	while (*s1 != '\0')
//	{
//		s1++;
//	}
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	return p;
//}
//
//int main()
//{
//	char arr1[100] = "abc";
//	char arr2[] = "def";
//
//	char* p = my_strcat(arr1, arr2);
//	printf("%s\n", p);
//	return 0;
//}





//模拟实现strstr


#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strstr(const char* str1, const char* str2)
{
	const char* cp = str1;
	const char* s1;
	const char* s2;

	assert(str1, str2);
	if (*str2 == '\0')
	{
		return str1;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && *s1 == *s2)
		{

			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;

}

int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	char* p = my_strstr(arr1, arr2);
	printf("%s\n", p);
	return 0;
}



