#include<stdio.h>
#pragma pack(1)
#include<stdlib.h>
struct s{
  int i;
  char ch;
  double d;
}A;
int main()
{ 
  printf("\n Size of structure A is : %ld",sizeof(A));
  //print the actual size
  printf("\n Size of int %d \n Size of char %d \n Size of double %ld \n totalsize is %ld", sizeof(A.i),sizeof(A.ch),sizeof(A.d));
  printf("\n *******************************************");
  printf("\n Finding structure size without sizeof operator");
  struct s *sptr;
  sptr++;
  printf("\nSize of structure = %u \n\n",sptr);
  return 0;
}
