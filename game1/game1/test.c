#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//�˵���ӡ
void menu()
{
	printf("*************************\n");
	printf("*****   1. play    ******\n");
	printf("*****   0. exit    ******\n");
	printf("*************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL];
	//��ʼ��ʱ�����������Ӧ����ȫ���ո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
	//�������
		PlayerMove(board, ROW, COL);
	//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
//���Ӯ - '*'
//����Ӯ - '#'
//ƽ�� --- 'Q'
//��Ϸ����-'C'
		//��ʤ����
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		//��ʤ����
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{
	//intput���������Ƿ�ʼ��Ϸ������do whileѭ����һ��������������
	int input = 0;
	//���rand����ʹ��
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
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


