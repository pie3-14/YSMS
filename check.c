#include <string.h>

#include "check.h"

/*
 * 입력받은 메인 함수 인자값 갯수가 2개 이상인지에 대한 확인
 * 2개면 1, 3개이면 2, 그것도 아니면 -1 반환
 * */
int check_arg(int input) {

	static int result = -1;

	if (input == 2) {
		result = 1;
		goto HALT;
	} else if (input == 3) {
		result = 2;
		goto HALT;
	} else {
		goto HALT;
	}

	HALT:
	return result;
}

/* 대문자를 소문자로 */
char* strlwr (char* s) {
	unsigned int size = strlen(s);
    for (int i = 0; i < size; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
		    s[i] += 32;	
		}
	}

    return s;
}