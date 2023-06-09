//
//  game.c
//  test
//
//  Created by HiLau on 2023/6/9.
//

#include "game.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void InitBoard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    for(i = 0;i<row;i++)
    {
        int j = 0;
        for(j=0;j<col;j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    for(i = 0;i<row;i++)
    {
        int j = 0;
        for(j = 0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col - 1)
                printf("|");
        }
        printf("\n");
        if(i<row - 1)
        {
            for(j = 0;j<col;j++)
            {
                printf("---");
                if(j<col - 1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void PlayerBoard(char board[ROW][COL],int row,int col)
{
    int x = 0;
    int y = 0;
    printf("玩家走>:\n");
    scanf("%d%d",&x,&y);
    while(1)
    {
        printf("请下子>:");
        if(x>=1 &&x<=3 && y>=1 && y<=3 )
        {
            if(board[x-1][y-1] == ' ')
            {
                board[x-1][y-1] == '*';
                break;
            }
            else
            {
                printf("被占用\n");
            }
        }
        else
        {
            printf("非法输入\n");
        }
    }
}

void ComputerBoard(char board[ROW][COL],int row,int col)
{
    int x = 0;
    int y = 0;
    printf("电脑走>:\n");
    while(1)
    {
        x = rand()%ROW;
        y = rand()%COL;
        if(board[x][y] == ' ')
        {
         board[x][y] == '#';
         break;
        }
    }
}

void IsWin(char board[ROW][COL],int row,int col)
{
    
}
