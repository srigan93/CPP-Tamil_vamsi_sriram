#include<stdio.h>
#include<string.h>
void swap(int*,int*);
void main()
{
  int num1,num2;
  printf("enter two numbers to be swapped : \n ");
  scanf("%d%d",&num1,&num2);
  printf("Numbers before Swapping \nnum1 = %d, number2 = %d \n",num1,num2);
  swap(&num1,&num2);
  printf("\nAfter swapping \nnum1 = %d, num2 = %d \n",num1,num2);
}
void swap(int *x, int *y)
{
  *x = *x ^ *y;
  *y = *x ^ *y;
  *x = *x ^ *y;
}
