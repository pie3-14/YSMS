#include <stdio.h>
#include <string.h>

#include "check.h"
#include "define.h"

int main(int argc, char *argv[]) {
    int numch; /* 매개 변수 개수 체크한 결과를 담을 변수 */
    char gog[5]="HELL";
    
    /* 매개 변수의 개수가 몇 개인지 먼저 체크 */
    numch = check_arg(argc);
    if (numch == 1) {/* 인자 값 개수가 두 개 일 때*/
        /* 2번째 인수가 숫자인지 확인하고 점수 기록 시작 */
        printf("%s \n",strlwr(gog));
        goto HALT;
    } else if (numch == 2) {/* 인자 값 개수가 세 개 일 때*/
        char bigyo[4] = strlwr(argv[2]); /* 대문자가 있다면 전부 소문자로 */
        if (strncmp(bigyo,"-bo",4) == 0) { /* -bo와 일치한다면 */
            /* 2번째 인수가 숫자인지 확인하고 점수 기록 시작 */
            #if DEBUG
            printf("정상 작동\n");
            #endif
            goto HALT;
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