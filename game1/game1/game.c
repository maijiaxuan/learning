#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//初始化数组
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

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//先打印数据的那一排
		for (j = 0; j < col; j++)
		{
			//打印数据
			printf(" %c ", board[i][j]);
			//打印分割列
			//最后一行不打
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//再打印分割行
	
		//最后一排不打
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				//最后一行不打
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");

	}
}
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");

	while (1)
	{
		printf("请输入要下棋的坐标:>");
		scanf("%d %d", &x, &y);
		//如果要下的地方是空的就可以下。如果不是空的就不可以下，如果输入的坐标超出棋盘也不可以下
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//数组从零开始，比输入坐标小1
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占有，请输入其他坐标\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

//电脑随机下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");

	int x = 0;
	int y = 0;

	while (1)
	{
		//rand生成随机数，然后模上row、col，使数在0到row、col之间
		x = rand() % row;
		y = rand() % col;
		//如果下的位子是空就下，不是就继续生成随机数
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断是否有空可下，有就返0，无就返1
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//还有空可以下
			if (board[i][j] == ' ')
				return 0;
		}
	}
	//无空可下，平局
	return 1;
}

//玩家赢 - '*'
//电脑赢 - '#'
//平局 --- 'Q'
//游戏继续-'C'

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//一行图案相同且不是空
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			//相等什么返回什么。
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		//一列图案相同且不是空
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//撇相同且不是空
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//捺相同且不是空
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	//IsFull函数判断是否有空可下，有就返0，无就返1
	if (IsFull(board, row, col))
	{
		//平局
		return 'Q';
	}
	//继续游戏
	return 'C';
}
