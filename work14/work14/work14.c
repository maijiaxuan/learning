#define _CRT_SECURE_NO_WARNINGS 1

//��ҵ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���

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