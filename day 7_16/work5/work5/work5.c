#define _CRT_SECURE_NO_WARNINGS 1

//дһ�������ӡ1-100֮������3�ı���������

//#include<stdio.h>
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//д���뽫�������������Ӵ�С�����
//
//���磺
//
//���룺2 3 1
//
//�����3 2 1

//#include<stdio.h>
//int main() {
//	int arr[3] = { 0 };
//
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	int n = 0;
//	for (int j = 0; j < 2; j++) {
//		if (arr[j] < arr[j+1]) {
//			n= arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = n;
//		}
//	}
//
//	for (int k = 0; k < 3; k++) {
//		printf("%d ", arr[k]);
//	}
//	return 0;
//}



//дһ�����룺��ӡ100~200֮�������

//#include<stdio.h>
//int main() {
//	for (int i = 100; i <= 200; i++) {
//		int n = 0;
//		for (int j = 1; j <= i; j++) {
//			if (i % j == 0) {
//				n++;
//			}
//		}
//		if (n == 2) {
//			printf("%d ", i);
//		}
//	}
//    
//	return 0;
//}



//��ӡ1000�굽2000��֮�������

//#include<stdio.h>
//int main() {
//	for (int i = 1000; i <= 2000; i++) {
//		if (i % 4 == 0 && i % 100 != 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//���������������������������Լ��
//
//���磺
//
//���룺20 40
//
//�����20

//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int i = 0;
//	i = (a > b ? b : a);
//	for (; i >= 0; i--) {
//		if (a % i == 0 && b % i == 0) {
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}



//����Ļ�����9*9�˷��ھ���

//#include<stdio.h>
//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%d	", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//��10 �����������ֵ

//#include<stdio.h>
//int main() {
//	int arr[10];
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	int max = 0;
//	for (int j = 0; j < 10; j++) {
//		if (max < arr[j]) {
//			max = arr[j];
//		}
//	}
//
//	printf("%d", max);
//
//	return 0;
//}



//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

#include<stdio.h>
#include<math.h>
int main() {
	double sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += pow(-1, i + 1) * (1.0 / i);
	}

	printf("%f", sum);

	return 0;
}
