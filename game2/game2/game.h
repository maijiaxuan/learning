#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

//多加两行两列，方便边框位置统计雷的个数
#define ROWS ROW+2
#define COLS COL+2


#define EASY_COUNT 10


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//显示棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
