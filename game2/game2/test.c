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
	//mine放布置好的雷的信息
	//show放排查好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化mine数组
	InitBoard(mine, ROWS, COLS, '0');
	//初始化show
	InitBoard(show, ROWS, COLS, '*');
	//显示棋盘
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	////配合rand函数使用
	srand((unsigned int)time(NULL));
	//intput变量控制是否开始游戏并控制do while循环，一个变量控制两。
	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
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



