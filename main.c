//숫자 맞추기 게임(정해진 정답 숫자를 맞추는 게임) 입력받은 수가 정답보다 큰지 작은지 출력. 정답을 맞추면 시도 횟수를 알려주고 프로그램 종료//
//do-while문을 사용하여 반복적으로 답을 입력 받음//
#include <stdio.h>

int main(void) {
    int answer = 59; //정답 숫자
    int guess; //사용자가 입력한 숫자
    int try = 0; //시도 횟수

    do
    {
        printf("Guess a number : ");
        scanf("%d", &guess);

        try++; //시도 횟수 증가

        if (guess > answer) {
            printf("low!\n");
        }
        else if (guess < answer) {
            printf("high!\n");
        }
        else {
            printf("Congratulations! trials: %d\n", try);
        }
    } while (guess != answer); //정답을 맞출 때까지 반복

    return 0;
}