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
void rule(void) {
    printf("요트 규칙 \n");
    printf("1. 주사위 5개를 던진다. \n");
    printf("2. 이 중 원하는 주사위들은 남겨두고, 나머지 주사위들을 다시 던진다. 다시 던지기는 한 라운드에 2번까지 가능하며,\n 앞에서 던지지 않았던 주사위도 원한다면 다시 던질 수 있다.\n");
    printf("3. 주사위 던지기가 끝난 후 나온 최종 조합으로, 아래 제시된 족보 중 아직까지 기록되지 않은 하나를 반드시 선택하여, 점수판에 해당 족보의 점수를 규칙에 맞게 기록해야 한다.\n");
    printf("4. 기록되지 않은 족보 중에서 만족하는 족보가 없거나, 있더라도 점수 기대값이 마음에 들지 않는 등의 사유로, 만족하지 않는 족보를 선택하는 경우, 선택한 족보의 점수칸에 0점으로 기록해야 한다.\n");
    printf("5. 모든 플레이어가 점수판을 모두 채우면 게임이 끝난다. 점수판에 기록한 점수 총합이 가장 높은 사람이 승리하며, 순위를 가릴 경우 점수 총합이 높은 순서대로 순위를 결정한다.\n");

}

/* 순위 */
void rank(void) {}

/* 점수 목록 */
void list(void) {}