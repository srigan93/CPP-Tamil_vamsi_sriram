#include<stdio.h>
void main()
{
  int a[100],n,i;
  printf("Enter the number of elements to add in array: \n");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  printf("The array contains... \n ");
  for(i=0; i<n; i++)
    {printf("%d \n",a[i]);}

}

