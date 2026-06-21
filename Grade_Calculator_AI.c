#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    


    if (a <=100 && a >=90)
    {
    printf("grade A");
    }
    else if(a<=89 && a>=80){
        printf("grade B");
    }
    else if(a<=79  && a>=60){
        printf("grade c");
    }
    else if(a<=59  && a>=30){
        printf("grade d\n");
    }
    else{
        printf("fail");
    }
    return 0;
}