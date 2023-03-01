#include <ctype.h>
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

/* 문자열에 숫자만 있는지 확인 
*숫자가 아닌게 포함되어 있다면 -1 반환, 전부 숫자라면 1 반환  
*/
int check_num(char* a) {
	for (int i = 0; i < strlen(a); i++) {
		if (isdigit(a[i]) == 0) {
			return -1;
		}
	}

	return 1;
}

/* 대문자를 소문자로 */
char* strlwr(char* s) {
	unsigned int size = strlen(s);
    for (int i = 0; i < size; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
		    s[i] += 32;	
		}
	}

    return s;
}
