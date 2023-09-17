#define _CRT_SECURE_NO_WARNINGS 1

//作业内容
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。

#include<stdio.h>

int main()
{
    int money = 0;
    int bottle = 0;
    int num = 0;
    scanf("%d", &money);
    num = money;
    bottle = money;
    while (bottle >= 2)
    {
        num += bottle / 2;
        bottle = bottle / 2 + bottle % 2;
    }
    printf("%d", num);
    return 0;
}