#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//�ȴ�ӡ���ݵ���һ��
		for (j = 0; j < col; j++)
		{
			//��ӡ����
			printf(" %c ", board[i][j]);
			//��ӡ�ָ���
			//���һ�в���
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//�ٴ�ӡ�ָ���
	
		//���һ�Ų���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				//���һ�в���
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");

	}
}
//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������\n");

	while (1)
	{
		printf("������Ҫ���������:>");
		scanf("%d %d", &x, &y);
		//���Ҫ�µĵط��ǿյľͿ����¡�������ǿյľͲ������£������������곬������Ҳ��������
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//������㿪ʼ������������С1
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�У���������������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

//�����������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");

	int x = 0;
	int y = 0;

	while (1)
	{
		//rand�����������Ȼ��ģ��row��col��ʹ����0��row��col֮��
		x = rand() % row;
		y = rand() % col;
		//����µ�λ���ǿվ��£����Ǿͼ������������
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//�ж��Ƿ��пտ��£��оͷ�0���޾ͷ�1
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//���пտ�����
			if (board[i][j] == ' ')
				return 0;
		}
	}
	//�޿տ��£�ƽ��
	return 1;
}

//���Ӯ - '*'
//����Ӯ - '#'
//ƽ�� --- 'Q'
//��Ϸ����-'C'

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//һ��ͼ����ͬ�Ҳ��ǿ�
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			//���ʲô����ʲô��
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		//һ��ͼ����ͬ�Ҳ��ǿ�
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//Ʋ��ͬ�Ҳ��ǿ�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//����ͬ�Ҳ��ǿ�
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	//IsFull�����ж��Ƿ��пտ��£��оͷ�0���޾ͷ�1
	if (IsFull(board, row, col))
	{
		//ƽ��
		return 'Q';
	}
	//������Ϸ
	return 'C';
}
