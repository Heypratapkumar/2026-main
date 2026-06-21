#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int scanLargestNumber(void)
{
    int count, number, largest;

    printf("How many numbers do you want to compare? ");
    if (scanf("%d", &count) != 1 || count <= 0) {
        printf("Please enter at least 1 number.\n");
        return 0;
    }

    printf("Enter number 1: ");
    if (scanf("%d", &largest) != 1) {
        printf("Invalid number.\n");
        return 0;
    }

    for (int i = 2; i <= count; i++) {
        printf("Enter number %d: ", i);
        if (scanf("%d", &number) != 1) {
            printf("Invalid number.\n");
            return 0;
        }

        if (number > largest) {
            largest = number;
        }
    }

    return largest;
}

int main(void)
{
    int choice, a, b, largest;

    printf("Mini Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Scan largest number\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice.\n");
        return 1;
    }

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid numbers.\n");
                return 1;
            }
            printf("%d + %d = %d\n", a, b, add(a, b));
            break;

        case 2:
            printf("Enter two numbers: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid numbers.\n");
                return 1;
            }
            printf("%d - %d = %d\n", a, b, subtract(a, b));
            break;

        case 3:
            printf("Enter two numbers: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid numbers.\n");
                return 1;
            }
            printf("%d * %d = %d\n", a, b, multiply(a, b));
            break;

        case 4:
            printf("Enter two numbers: ");
            if (scanf("%d %d", &a, &b) != 2) {
                printf("Invalid numbers.\n");
                return 1;
            }

            if (b == 0) {
                printf("Error: division by zero is not allowed.\n");
            } else {
                printf("%d / %d = %.2f\n", a, b, divide(a, b));
            }
            break;

        case 5:
            largest = scanLargestNumber();
            printf("Largest number is: %d\n", largest);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
