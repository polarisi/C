#pragma once

#include <stdio.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#define EASY_COUNT 10

void  InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void  DisplayBoard(char board[ROWS][COLS], int row, int col);
void Setmine(char board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void Markmine(char show[ROWS][COLS], int row, int col);
void Spreadmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y/*, int* win*/);
void Stat_judge(char show[ROWS][COLS], int* win, int row, int col);









