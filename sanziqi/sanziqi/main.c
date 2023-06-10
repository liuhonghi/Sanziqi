//
//  main.c
//  sanziqi
//
//  Created by HiLau on 2023/6/9.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"



void game()
{
    char ret = 0;
    char board [ROW][COL] = {0};
    //初始化
    InitBoard(board,ROW,COL);
    DisplayBoard(board,ROW,COL);
    while(1)
    {
        PlayerBoard(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        ret = IsWin(board,ROW,COL);
        if(ret != 'C')
        {
            break;
        }
        ComputerBoard(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        ret = IsWin(board,ROW,COL);
        if(ret != 'C')
        {
            break;
        }
    }
    if(ret == '*')
    {
        printf("玩家win\n");
    }
    else if (ret == '#')
    {
        printf("电脑win\n");
    }
    else
    {
        printf("平局\n");
    }
}
void menu()
{
    printf("********************\n");
    printf("*** 1.play 0.exit***\n");
    printf("********************\n");
}

void test()
{
    srand((unsigned int) time(NULL));
    int input = 0;
    do
    {
        menu();
        printf("请选择:");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("请重新选择!\n");
                break;
        }
    }
    while(input);
}
//三子棋游戏
int main()
{
    test();
    return 0;
}
