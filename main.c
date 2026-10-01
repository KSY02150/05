//입력된 문자열에서 숫자의 개수 세기//

#include <stdio.h>

int main(void)
{
    char c;
    int num = 0;

    printf("input the string : ");

    while ((c = getchar()) != '\n') //문자열 입력받기
    {
        if (c >= '0' && c <= '9') //숫자인지 확인
        {
            num++; //숫자 개수 증가
        }
    }

    printf("The number of digits is : %d\n", num); //숫자 개수 출력
    
    return 0;
}