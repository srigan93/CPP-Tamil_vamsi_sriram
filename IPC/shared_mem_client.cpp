#include<iostream>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
  key_t key = ftok("Sriram_memory",60);
  // key_t is defined in sys/types.h for requesting memory resources ie.,shared memory segments
  int shmid = shmget(key,1024,0666|IPC_CREAT);//returns a identifier
  char *str = (char*)shmat(shmid,(void *)0,0);//attach to memory region
  cout<<"write Data : ";
  gets(str);
  printf("Data written in memory : %s \n",str);
  shmdt(str);
  return 0;
}
