//정수를 입력받아 1부터 입력 정수까지 더해서 그 결과를 출력//

#include <stdio.h>

int main(void) {
    int num, sum = 0;

    printf("input the integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    printf("The result is %d\n", sum);
    return 0;
}