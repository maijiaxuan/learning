#define _CRT_SECURE_NO_WARNINGS 1
//描述
//判断一个整数是否能5整除是一个挺简单的问题，懒惰的KiKi还是不想自己做，于是找到你帮他写代码，你就帮帮他吧。
//输入描述：输入包括一个整数M（1≤M≤100, 000）。
//输出描述：输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）。
//示例1
//输入：10
//输出：YES
//示例2
//输入：9
//输出：NO
#include<stdio.h>
int main() {
	int M;
	scanf("%d", &M);
	if (M % 5 == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}
}
