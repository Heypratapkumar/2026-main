#include <stdio.h>

int main()
{
    int a, b;
    char c;

    printf("Enter: num1 operator num2 (e.g. 5 + 3): ");
    scanf("%d %c %d", &a, &c, &b);

    switch (c) {
        case '+': printf("%d + %d = %d\n", a, b, a + b); break;
        case '-': printf("%d - %d = %d\n", a, b, a - b); break;
        case '*': printf("%d * %d = %d\n", a, b, a * b); break;
        case '/':
            if (b == 0)
                printf("Error: division by zero\n");
            else
                printf("%d / %d = %d\n", a, b, a / b);
            break;
        default:
            printf("Unknown operator: %c\n", c);
    }

    return 0;
}

     
