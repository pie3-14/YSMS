/* 다양한 곳에서 공용으로 쓰일 상수, 구조체 등을 정의*/

#pragma once

/* 상수 - 0이면 컴파일 제외, 그 외 숫자이면 컴파일 */

/* 디버그용
 * */
#define DEBUG 1

/*
* 컴파일 제외
*/
#define DISABLE 0

/* 명령어 */
#define LIST "list" /* 플레이어 점수 전체 출력 */
#define EXIT "exit" /* 프로그램 종료 */
#define HELP "help" /* 도움말 출력 */
#define RANK "rank" /* 유저 점수로 순위 매겨 출력 */
#define RULE "rule" /* 요트 규칙 출력 */
#define SET "set" /* 여러가지 설정 (플레이어 이름, 각 플레이어 별 얻은 점수 입력 등)*/

/* 플래그 */
#define O "o"
#define TW "tw"
#define TH "th"
#define FO "fo"
#define FI "fi"
#define SI "si"
#define FOK "fok"
#define FH "fh"
#define LS "ls"
#define BS "bs"
#define YT "yt"
#define CH "ch"
#define BO "bo" /* 보너스 점수 온 */

/* 도움말 */
#define EXIT_HELP "EXIT - 프로그램을 종료합니다.(종료 시 게임 진행 사항은 저장되지 않습니다.)"
#define HELP_HELP "HELP - 도움말을 출력합니다."
#define LIST_HELP "LIST - 각 플레이어의 점수 현황을 출력합니다."
#define RANK_HELP "RANK - 각 플레이어 점수로 순위를 매겨 출력합니다."
#define RULE_HELP "RULE - 요트의 규칙을 출력합니다."
#define SET_HELP "SET <플래그> <입력할 정보> - <플래그>에 맞는 <입력할 정보>를 입력합니다."
#define O_HLEP " -o    : 이 플래그는 Ones(Aces)의 점수를 입력합니다."
#define TW_HLEP " -tw   : 이 플래그는 Twos(Deuces)의 점수를 입력합니다."
#define TH_HLEP " -th   : 이 플래그는 Trees의 점수를 입력합니다."
#define FO_HLEP " -fo   : 이 플래그는 Fours의 점수를 입력합니다."
#define FI_HLEP " -fi   : 이 플래그는 Fives의 점수를 입력합니다."
#define SI_HLEP " -si   : 이 플래그는 Sixes의 점수를 입력합니다."
#define FOK_HLEP " -fok  : 이 플래그는 Four of a kind(4 of a Kind)의 점수를 입력합니다."
#define FH_HLEP " -fh   : 이 플래그는 Full House의 점수를 입력합니다."
#define LS_HLEP " -ls   : 이 플래그는 Little Straight의 점수를 입력합니다."
#define BS_HLEP "-bs   : 이 플래그는 Big Straight의 점수를 입력합니다."
#define YT_HLEP "-yt   : 이 플래그는 Yacht의 점수를 입력합니다."
#define CH_HLEP "-ch   : 이 플래그는 Choice의 점수를 입력합니다."
#define BO_HELP "-bo   : 이 플래그는 프로그램 시작 시 플레이어 수 다음에 입력하는 플래그로, 게임을 진행하며 \n       플레이어가 Ones ~ Sixes의 점수의 총합이 63점 이상이면 보너스 점수 35점을 추가로 얻습니다."
#define WOR "해당 명령어를 실행 시 점수를 다시 수정할 수 없습니다."