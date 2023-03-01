#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#include "check.h"
#include "cmd.h"
#include "define.h"
#include "game.h"

/* 입력된 명령어 분해해서 저장할 구조체 */
typedef struct {
    char* name;/* 명령어 */
    char* flag;
    char* wem; /* 추가로 뭔갈 적어야 할 때 */
    /* 명령어를 입력한다면 <name> <flag> <wem> */
} CMD;


/* 인원 수 많큼 점수를 저장할 배열 만들기 */
int game(int player, char* yorn) {
    int size = player; /* 배열 사이즈 */
    char yn[2];
    strncpy(yn, yorn, 1); /* 인수를 yn에다가 복사 */
    #if DEBUG
    printf("yn 값 : %s \n", yn);
    #endif
    char command[100]; /* 입력받을 변수 */
    char* com_clr; /* 전부 소문자로 바꾼 뒤 저장할 변수 */

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

    /* 할당 */
    /* 웨이브 */
    ones = (int*)calloc(size, sizeof(int));
    twos = (int*)calloc(size, sizeof(int));
    threes = (int*)calloc(size, sizeof(int));
    fours = (int*)calloc(size, sizeof(int));
    fives = (int*)calloc(size, sizeof(int));
    sixes = (int*)calloc(size, sizeof(int));
    fok = (int*)calloc(size, sizeof(int));
    fh = (int*)calloc(size, sizeof(int));
    ls = (int*)calloc(size, sizeof(int));
    bs = (int*)calloc(size, sizeof(int));
    yacht = (int*)calloc(size, sizeof(int));
    choice = (int*)calloc(size, sizeof(int));

    printf("Yacht Score Management System - 요트 점수 관리 시스템\n");

    /* 명령어를 입력받는 것을 무한 반복*/
    while (1) {
        printf(">>");
        fgets(command, sizeof(command), stdin);
        com_clr = strlwr(command); /* 대문자가 있으면 전부 소문자로 바꿔서 저장 */
        char* boonhae = strtok(command, " "); /* 분해한 결과물*/
        CMD result;
        while (boonhae != NULL) {
            result.name = boonhae;
            boonhae = strtok(NULL, " "); 
            result.flag = boonhae;
            boonhae = strtok(NULL, " ");
            result.wem = boonhae;
            boonhae = strtok(NULL, " ");
        }
        if (strncmp(command,HELP,4) == 0) {
            help();
        } else if (strncmp(command,EXIT,4) == 0) {
            break;
        } else if(strncmp(command,LIST,4) == 0) {
            printf("구현 안됨 \n");
        } else if (strncmp(command,RANK,4) == 0) {
            printf("구현 안됨 \n");
        } else if (strncmp(command,RULE,4) == 0) {
            rule();
        } else if (strncmp(command,SET,4) == 0) {
            printf("구현 안됨 \n");
        } else {
            printf("해당 명령어는 존재하지 않습니다. \n");
        }
        #if DEBUG
        if (strncmp(command,HELP,4) == 0) {
            help();
        }else if (strncmp(command,RULE,4) == 0) {
            rule();
        }
        #endif
    }

    /* 할당된 것들 해제 */
    free(ones);
    free(twos);
    free(threes);
    free(fours);
    free(fives);
    free(sixes);
    free(fok);
    free(fh);
    free(ls);
    free(bs);
    free(yacht);
    free(choice);

    return -1;
}