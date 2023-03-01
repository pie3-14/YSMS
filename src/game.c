#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#include "check.h"
#include "cmd.h"
#include "define.h"
#include "game.h"

/* 인원 수 많큼 점수를 저장할 배열 만들기 */
int game(int player, char* yorn) {
    int size = player;
    char yn[2];
    strncpy(yn, yorn, 1);
    char command[100];
    char* com_clr;
    /* 무슨 숫자든 일단 기록되면 끝이니 배열의 모든 원소는 NULL로 */
    /* 각 점수를 저장할 배열을 인원 수 만큼의 원소를 가진 사이즈로 생성 */
    /* 고정 점수들은 상황에 따라 다를 수도 있음 */
    int *ones; /* 1이 나온 주사위 눈의 총합 */
    int *twos; /* 2가 나온 주사위 눈의 총합 */
    int *threes; /* 3이 나온 주사위 눈의 총합 */
    int *fours; /* 4가 나온 주사위 눈의 총합 */
    int *fives; /* 5가 나온 주사위 눈의 총합 */
    int *sixes; /* 6이 나온 주사위 눈의 총합 */
    int *fok; /* Four of a Kind : 동일한 주사위 눈이 4개일 때 동일한 주사위 눈 4개의 총합 */
    int *fh; /* Full House : 동일한 주사위 눈이 3개, 다른 동일한 주사위 눈이 2개일 때 5개의 총합 */
    int *ls; /* Little Straight : 주사위 눈이 각각 1, 2, 3, 4, 5일 때, 고정 30점 */
    int *bs; /* Big Straight : 주사위 눈이 각각 2, 3, 4, 5, 6일 때, 고정 30점 */
    int *yacht; /* 5개 전부 같을 때, 고정 50점 */
    int *choice; /* 주사위 눈 5개의 총합 점수 */

    /* 배열을 할당 */
    /* 웨이브 */
    ones = (int*)malloc(sizeof(int) * size);
    twos = (int*)malloc(sizeof(int) * size);
    threes = (int*)malloc(sizeof(int) * size);
    fours = (int*)malloc(sizeof(int) * size);
    fives = (int*)malloc(sizeof(int) * size);
    sixes = (int*)malloc(sizeof(int) * size);
    fok = (int*)malloc(sizeof(int) * size);
    fh = (int*)malloc(sizeof(int) * size);
    ls = (int*)malloc(sizeof(int) * size);
    bs = (int*)malloc(sizeof(int) * size);
    yacht = (int*)malloc(sizeof(int) * size);
    choice = (int*)malloc(sizeof(int) * size);

    printf("Yacht Score Management System - 요트 점수 관리 시스템\n");

    /* 명령어를 입력받는 것을 무한 반복*/
    while (1) {
        printf(">>");
        fgets(command, sizeof(command), stdin);
        com_clr = strlwr(command);
        if (strncmp(command,HELP,4) == 0) {
            help();
        }
        #if DISABLE
        parse(command);
        if (parse(command) == -1) {
            break;
        }
        #endif
    }

    /* 할당된 것들 해제 */
    free(ones);
    ones = 0;
    free(twos);
    twos = 0;
    free(threes);
    threes = 0;
    free(fours);
    fours = 0;
    free(fives);
    fives = 0;
    free(sixes);
    sixes =0;
    free(fok);
    fok = 0;
    free(fh);
    fh = 0;
    free(ls);
    ls = 0;
    free(bs);
    bs = 0;
    free(yacht);
    yacht = 0;
    free(choice);
    choice = 0;

    return -1;
}
