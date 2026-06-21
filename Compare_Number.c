#include <stdio.h>
int main()
// Code For Find larger  Number //
/*
{
int a;
int b;
printf("Enter First Value: ");
scanf("%d", &a);
printf("Enter second Value: ");
scanf("%d", &b);
if (a > b)
{
    printf("%d is Lergest Number  \n" , a);
}
else if  (b > a)
{
     printf("%d is Lergest Number \n" , b);
}
else {
    printf("Both are  Equal Number \n");
}

return 0;
}
*/

// Code For Check Number is Possitive or negative or Zero //

/*
{
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);
if (a<0)
{
    printf("%d is Negative Number", a);

}
else if (a > 0)
{
    printf("%d is Positive Number", a);
}
else
{
    printf("%d is Zero ", a);
}

return 0;

}
*/

// Code for Check Whether a Number Is Even or Odd//
/*

{
    int a ,b ,c ;
    printf("Enter Number: ");
    scanf("%d", &a);
    b = a / 2;
    c = a % 2;
    if (a<1)
    {
        printf("%d is Zero ", a);
    }
    else if (c==0)
    {
        printf("%d is Even Number \n" , a);
    }
    else
    {
        printf("%d is Odd Number \n" , a);
    }
    return 0;
}
    */

// Code for Find the Largest of Three Numbers //

/*
{
  int a, b, c;
  printf("Enter 1st Number: ");
  scanf("%d", &a);
  printf("Enter 2nd Number: ");
  scanf("%d", &b);
  printf("Enter 3rd Number: ");
  scanf("%d", &c);

  if (a > b)
    {
      if (a > c)
      {
          printf("%d is largest Number \n", a);
          return 0;
      }
      else
      {
          printf("%d is largest Number \n", c);
          return 0;
      }
     }
  else if (b > c)
  {
      printf("%d is largest Number \n", b);
  }
return 0;
}
*/

{
    int a, b, c;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    printf("Enter 3rd Number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is largest number\n", a);
    }
    else if (b > c && b > a)
    {
        printf("%d is largest:  ", b);
    }
    else
    {
        printf("%d is largest\n", c);
    }
    return 0;
}