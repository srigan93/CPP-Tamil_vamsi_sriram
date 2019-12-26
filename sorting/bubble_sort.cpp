#include<iostream>
using namespace std;
class Sorting{
  public:
	void swap(int *first_elt,int *second_elt);
	void bubbleSort(int array[],int array_size);
 	void printArray(int array[],int array_size);
}obj;
void swap(int *first_elt,int *second_elt)
{
  int temp;
  temp=*first_elt;
  *first_elt=*second_elt;
  *second_elt=temp;
}
void printArray(int array[],int array_size)
{
  int i;
  for(i=0;i<array_size;i++)
  {
     std::cout<<array[i];
  }
  cout<<"\n";
}
void bubbleSort(int array[],int array_size)
{
  int i,j;
  for(int i=1;i<array_size-1;i++)
    for(int j=i;j<array_size-i-1;j++)
      if(array[j]>array[j+1])
         swap(&array[j],&array[j+1]);
}
int main()
{
  int array[]={20,2,14,9,24,6};
  int array_size= sizeof(array)/sizeof(array[0]);
  std::cout<<"array size is \n"<<array_size;
  //Sorting obj;
  std::cout<<"array before sorting \n";
  obj.printArray(array,array_size);
  obj.bubbleSort(array,array_size);
  std::cout<<"array after sorting \n";
  obj.printArray(array,array_size);
  return 0;
}
