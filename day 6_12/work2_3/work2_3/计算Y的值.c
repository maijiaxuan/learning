#define _CRT_SECURE_NO_WARNINGS 1
//描述
//已知一个函数y = f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。
//输入描述：一行，输入一个整数x。（ - 10000 < x < 10000）
//输出描述：一行，输出y的值。
//示例1
//输入：10
//输出：- 1
//示例2
//输入：- 10
//输出：1


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
