#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
//菜单打印
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
	//开始的时候，数组的内容应该是全部空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
	//玩家下棋
		PlayerMove(board, ROW, COL);
	//打印棋盘
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
//玩家赢 - '*'
//电脑赢 - '#'
//平局 --- 'Q'
//游戏继续-'C'
		//出胜负了
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		//出胜负了
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	//intput变量控制是否开始游戏并控制do while循环，一个变量控制两。
	int input = 0;
	//配合rand函数使用
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);


	return 0;
}


