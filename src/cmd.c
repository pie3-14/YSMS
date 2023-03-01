/* 여러 명령어들을 구현하는 곳 */
#include <stdio.h>

#include "cmd.h"
#include "define.h"

/* 명령어 입력받아서 점수 같은 거 세팅하는 거 */
void set(int score, char* flag) {}

/* 도움말 */
void help(void) {
    static int i;
    static const char* comm[6] = {EXIT_HELP, HELP_HELP, LIST_HELP, RANK_HELP, RULE_HELP, SET_HELP};
    static const char* flag[13] = { O_HLEP, TW_HLEP, TH_HLEP, FO_HLEP, FI_HLEP, SI_HLEP, FOK_HLEP, FH_HLEP, LS_HLEP, BS_HLEP, YT_HLEP, CH_HLEP, BO_HELP};
    printf("- 명령어 - \n");
    for (i = 0; i < 6; i++) {
        printf("%d. %s \n",i+1, comm[i]);
    }
    printf("- 플래그 - \n");
    for (i = 0; i < 13; i++) {
        printf("%d. %s \n",i+1,  flag[i]);
    }
}

/* 규칙 */
void rule(void) {}

/* 순위 */
void rank(void) {}
