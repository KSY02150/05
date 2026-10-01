//산술계산기 프로그램. 두 개의 정수와 연산자를 입력받고 계산값 출력//

#include <stdio.h>

int main(void) {

    int a, b;
    char op;

    printf("enter the calulation: ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("%d / %d = %d\n", a, b, a / b);
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
            break;
    }
    return 0;
}