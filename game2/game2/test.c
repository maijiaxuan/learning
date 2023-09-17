#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu()
{
	printf("***************************\n");
	printf("******  1. play     *******\n");
	printf("******  0. exit     *******\n");
	printf("***************************\n");
}

void game()
{
	//mine�Ų��úõ��׵���Ϣ
	//show���Ų�õ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ��mine����
	InitBoard(mine, ROWS, COLS, '0');
	//��ʼ��show
	InitBoard(show, ROWS, COLS, '*');
	//��ʾ����
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()
{
	////���rand����ʹ��
	srand((unsigned int)time(NULL));
	//intput���������Ƿ�ʼ��Ϸ������do whileѭ����һ��������������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}



