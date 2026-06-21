#include <stdio.h>
// ternary operator//
int main() {
    int a, b, c;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    printf("Enter 3rd Number: ");
    scanf("%d", &c);

    int second;
    if (a >= b && a >= c)
        second = (b >= c) ? b : c;
    else if (b >= a && b >= c)
        second = (a >= c) ? a : c;
    else 
        second = (a >= b) ? a : b;

    printf("%d is 2nd Highest Number\n", second);
    return 0;
}
