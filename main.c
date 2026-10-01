//입력 정수가 양수, 음수, 0인지 판단하여 출력하는 프로그램//

#include <stdio.h>

int main(void) {
    int num;

    printf("input the integer :");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive.\n");
    }
    else if (num < 0)
    {
        printf("Negative.\n");
    }
    else
    {
        printf("Zero.\n");
    }

    return 0;
}