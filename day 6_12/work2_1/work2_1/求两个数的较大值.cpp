#define _CRT_SECURE_NO_WARNINGS 1
//��ҵ����(637)
//���������Ľϴ�ֵ
//��ҵ����
//дһ�����������������Ľϴ�ֵ
//�磺
//���룺10 20
//
//����ϴ�ֵ��20
#include<stdio.h>
int max(int x,int y){
	if (x > y) {
		return x;
	}
	if (y > x) {
		return y;
	}
}
int main() {
	int a, b;
	printf("������������ͬ��������");
	scanf("%d %d", &a, &b);
	if (a == b) {
		printf("�����������\n");
	}
	else {
		int c = max(a, b);
		printf("�ϴ���Ϊ��%d\n", c);
	}
}
