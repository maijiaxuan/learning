#define _CRT_SECURE_NO_WARNINGS 1
//作业标题(637)
//求两个数的较大值
//作业内容
//写一个函数求两个整数的较大值
//如：
//输入：10 20
//
//输出较大值：20
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
	printf("请输入两个不同的整数：");
	scanf("%d %d", &a, &b);
	if (a == b) {
		printf("输入的数错误\n");
	}
	else {
		int c = max(a, b);
		printf("较大数为：%d\n", c);
	}
}
