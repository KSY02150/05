//입력 정수에 대한 절댓값 구하기//

#include <stdio.h>
int main(void)
{
    int num;
    printf("input the integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = -num;
        printf("The absolute value is: %d\n", num);
    }
    else
    {
        printf("The absolute value is: %d\n", num);
    }
    return 0;
}