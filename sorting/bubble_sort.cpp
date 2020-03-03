#include<iostream>
using namespace std;
class Sorting{
  public:
	void swap(int *first_elt,int *second_elt);
	void bubbleSort(int array[],int array_size);
 	void printArray(int array[],int array_size);
        void insertionSort(int array[],int array_size);
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
void insertionSort(int array[],int array_size)
{
  int i,key,j;
  for(i=1;i<array_size;i++)
  {
     key=array[i];
     j = i - 1;
     while( j >=0 && array[j] > key)
     {
       array[j+1] = array[j];
       j = j -1;
     }
     array[j+1] = key;
  }   
}
int main()
{
  int array[]={20,2,14,9,24,6},ch;
  int array_size= sizeof(array)/sizeof(array[0]);
  std::cout<<"array size is \n"<<array_size;
  //Sorting obj;
  Sorting obj1;
  std::cout<<"Menu : 1.Bubble_sort \n 2.InsertionSort \n";
  if(ch <=2){
  switch(ch){
	case 1:  
          std::cout<<"Array Before Bubble sort \n";
          obj.printArray(array,array_size);
          obj.bubbleSort(array,array_size);
          std::cout<<"Array After Bubble sort \n";
          obj.printArray(array,array_size);
 	  break;
       case 2:
          std::cout<<"Array Before Insertion sort \n";
          obj.printArray(array,array_size);
          obj.insertionSort(array,array_size);
          std::cout<<"Array After Insertion sort \n";
          obj.printArray(array,array_size);
       default:
          std::cout<<"Choice out of bounds \n";
       }
  }
  return 0;
}
