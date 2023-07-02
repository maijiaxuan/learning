#define _CRT_SECURE_NO_WARNINGS 1
//描述
//小乐乐最近接触了求和符号Σ，他想计算的结果。但是小乐乐很笨，请你帮助他解答。
//输入描述：输入一个正整数n(1 ≤ n ≤ 109)
//输出描述：输出一个值，为求和结果。
//示例1
//输入：1
//输出：1
//示例2
//输入：10
//输出：55
#include<stdio.h>
int main() {
	double n, sum = 0;
	scanf("%lf", &n);
	sum = (n * (1 + n)) / 2;
	printf("%.0lf", sum);

	return 0;
}