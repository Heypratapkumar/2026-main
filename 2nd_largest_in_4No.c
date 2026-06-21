#include <stdio.h>

int main()
{
    int a, b, c, d;
    int largest, second;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // initialize with first two
    if (a >= b) { largest = a; second = b; }
    else        { largest = b; second = a; }

    // check c
    if (c >= largest)       { second = largest; largest = c; }
    else if (c > second)    { second = c; }

    // check d
    if (d >= largest)       { second = largest; largest = d; }
    else if (d > second)    { second = d; }

    printf("Largest        : %d\n", largest);
    printf("Second Largest : %d\n", second);

    return 0;
}
