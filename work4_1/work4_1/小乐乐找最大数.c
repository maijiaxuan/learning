//����
//С���ֻ��4������������������ҵ���������
//����������һ�У�4���������ÿո�ֿ���
//���������һ�У�һ��������Ϊ�����4������������������
//ʾ��1
//���룺5 8 2 5
//�����8


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int arr[4] = {0};
	for (int i = 0; i < 4; i++) {
		scanf("%d", &arr[i]);
	}
	
	int max = arr[0];
	for (int j = 1; j < 4; j++) {
		if (max < arr[j]) {
			max = arr[j];
		}
	}
	printf("%d", max);
	return 0;
}