#define _CRT_SECURE_NO_WARNINGS 1

//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������


#include<stdio.h>
#include <stdlib.h>
#include <string.h>



//����
void swap(char* buf1, char* buf2, size_t size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//���͵�ð������
void bubble_sort(void* base, size_t num, size_t size, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//if (arr[j] > arr[j + 1])
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}


//��������

//��ӡint����
void print_arr1(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//�ж�int
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;
}

void test1()
{
	int arr1[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	print_arr1(arr1, sz);
	bubble_sort(arr1, sz, sizeof(arr1[0]), cmp_int);
	print_arr1(arr1, sz);
}



//�ַ�����

//��ӡchar����
void print_arr2(char arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
}

//�ж�char
int cmp_char(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}

void test2()
{
	char arr2[] = {'g','f','e','d','c' ,'b','a'};
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	print_arr2(arr2, sz);
	bubble_sort(arr2, sz, sizeof(arr2[0]), cmp_char);
	print_arr2(arr2, sz);
}

//�ṹ��

struct stu
{
	char name[20];
	int age;
};


//�Խṹ�壨���䣩��������

//����ṹ��
void print_arr34(struct stu arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s,", arr[i].name);
		printf("%d  ", arr[i].age);

	}
	printf("\n");
}
//�ж�age
int cmp_struct_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

void test3()
{
	struct stu arr3[] = { {"zhanhsan", 20}, {"lisi", 30}, {"wangwu", 12} };
	int sz = sizeof(arr3) / sizeof(arr3[0]);
	print_arr34(arr3, sz);
	bubble_sort(arr3, sz, sizeof(arr3[0]), cmp_struct_age);
	print_arr34(arr3, sz);
}

//�Խṹ�壨��������������

int cmp_struct_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

void test4()
{
	struct stu arr4[] = { {"zhanhsan", 20}, {"lisi", 30}, {"wangwu", 12} };
	int sz = sizeof(arr4) / sizeof(arr4[0]);
	print_arr34(arr4, sz);
	bubble_sort(arr4, sz, sizeof(arr4[0]), cmp_struct_name);
	print_arr34(arr4, sz);
}


//��float��������

//��ӡfloat����
void print_arr5(float arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");
}

int cmp_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;
}

void test5()
{
	float arr5[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
	int sz = sizeof(arr5) / sizeof(arr5[0]);
	print_arr5(arr5, sz);
	qsort(arr5, sz, sizeof(arr5[0]), cmp_float);
	print_arr5(arr5, sz);
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	return 0;
}