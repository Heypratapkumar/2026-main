#include<stdio.h>
int main()
{
    int a, b, c,d ;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    printf("Enter 3rd Number: ");
    scanf("%d", &c);
     printf("Enter 4th Number: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("%d is largest number\n", a);
    }
    else if (b > c && b > a && b > d)
    {
        printf("%d is largest:  ", b);
    }
    else if (c > d && c > a && c > d)
    {
        printf("%d is largest\n", c);
    }
    else
    {
        printf("%d is largest\n", d);
    }
    return 0;
}