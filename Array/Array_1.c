#include <stdio.h>

int main()
{
    int A[5];

    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nArray elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}