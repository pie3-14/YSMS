#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "check.h"
#include "define.h"
#include "game.h"

int main(int argc, char *argv[]) {
    int numch; /* 매개 변수 개수 체크한 결과를 담을 변수 */
    int num; /* 숫자로 변환한 값 담을 변수*/

    /* 매개 변수의 개수가 몇 개인지 먼저 체크 */
    numch = check_arg(argc);
    if (numch == 1) {/* 인자 값 개수가 두 개 일 때*/
        /* 2번째 인수가 숫자인지 확인하고 점수 기록 시작 */
        #if DEBUG
        printf("check_num 함수 반환값 : %d \n", check_num(argv[1]));
        #endif
        if (check_num(argv[1]) == 1) { /* 인수가 숫자라면 */
            num = atoi(argv[1]);
            if (num > 0 && num < 6) { /* 1 ~ 5 사이 */
                game(num, "n");
                goto HALT;
            } else {
                printf("플레이어 수는 1 ~ 5명이여야 합니다. \n");
                goto HALT;
            }
        } else {
            goto ERR;
        }
        goto HALT;
    } else if (numch == 2) {/* 인자 값 개수가 세 개 일 때*/
        if (strncmp(strlwr(argv[2]),"-bo",4) == 0) { /* -bo와 일치한다면 */
            if (check_num(argv[1]) == 1) { /* 인수가 숫자라면 */
                num = atoi(argv[1]);
                if (num > 0 && num < 6) { /* 1 ~ 5 사이 */
                    game(num, "y");
                    goto HALT;
                } else {
                    printf("플레이어 수는 1 ~ 5명이여야 합니다. \n");
                    goto HALT;
                }
            }
        } else {
            /* 일치하지 않는다면 */
            goto ERR;
        }
    } else if (numch == -1) {
        /* 인자 값 개수가 한 개 일 때*/
        printf("인자가 부족합니다.\n");
        goto HALT;
    }
ERR:
    printf("인자가 잘 못 되었습니다.\n"); /* 오류 메시지 출력 */
    goto HALT;
HALT: /* 종료 */
    return 0;
}