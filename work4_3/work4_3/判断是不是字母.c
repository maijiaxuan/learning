//����:KiKi���ж�������ַ��ǲ�����ĸ����������ʵ�֡�
//�����������������룬ÿһ������һ���ַ���
//������������ÿ�����룬�������ռһ�У��ж������ַ��Ƿ�Ϊ��ĸ���������������������
//ʾ��1
//���룺
//A
//6
//�����
//A is an alphabet.
//6 is not an alphabet.

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	char n;
	while ((scanf("%c", &n)) != EOF) {
		if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')) 
			printf("%c is an alphabet.\n",n);
		else 
			printf("%c is not an alphabet.\n",n);
		scanf("%c", &n);
	}
	return 0;
}


//#include <stdio.h>
//
//int main() {
//    char ch = 0;
//    while ((ch = getchar()) != EOF) {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//        getchar();
//    }
//    return 0;
//}
