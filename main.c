#include <stdio.h>
#include <string.h>

#include "check.h"
#include "define.h"

int main(int argc, char *argv[]) {
    int numch; /* 매개 변수 개수 체크한 결과를 담을 변수 */
    /* 매개 변수의 개수가 몇 개인지 먼저 체크 */
    numch = check_arg(argc);
    if (numch == 1) {
        /* 인자 값 개수가 두 개 일 때*/
        goto HALT; /* 함수가 종료되고 나면 main 또한 종료 */
    } else if (numch == 2) {
        /* 인자 값 개수가 세 개 일 때*/
        if (strcmp(argv[2],"-bo") == 0) {
            /* -bo와 일치한다면 */
            goto HALT; /* 함수가 종료되고 나면 main 또한 종료 */
        } else {
            /* 일치하지 않는다면 */
            printf("인자가 잘 못 되었습니다.\n");
            goto HALT;
        }
    } else if (numch == -1) {
        /* 인자 값 개수가 한 개 일 때*/
        printf("인자가 부족합니다.\n");
        goto HALT;
    }

HALT: /* 종료 */
    return 0;
}