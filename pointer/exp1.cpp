#include<iostream>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    std::cout<<"Number of elements between two pointer are:\n "<< 
                                (ptr2 - ptr1);
    std::cout<<"\nNumber of bytes between two pointers are: \n"<<  
                              (char*)ptr2 - (char*) ptr1;
    return 0;
}
