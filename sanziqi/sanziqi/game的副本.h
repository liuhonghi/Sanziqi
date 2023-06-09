//
//  game.h
//  test
//
//  Created by HiLau on 2023/6/9.
//
#define ROW 3
#define COL 3

#include <stdio.h>

//声明
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayerBoard(char board[ROW][COL],int row,int col);
void ComputerBoard(char board[ROW][COL],int row,int col);

void IsWin(char board[ROW][COL],int row,int col);
