#define _CRT_SECURE_NO_WARNINGS 1
//����
//��֪һ������y = f(x)����x < 0ʱ��y = 1����x = 0ʱ��y = 0����x > 0ʱ��y = -1��
//����������һ�У�����һ������x���� - 10000 < x < 10000��
//���������һ�У����y��ֵ��
//ʾ��1
//���룺10
//�����- 1
//ʾ��2
//���룺- 10
//�����1


#include<stdio.h>
int f(int x) {
	int m = -2;
	if (x < 0) {
		m=1;
	}
	if (x == 0) {
		m=0;
	}
	if (x > 0) {
		m=-1;
	}
	return m;
}
int main() {
	int x,y;
	scanf("%d", &x);
	y = f(x);
	printf("%d", y);
}
