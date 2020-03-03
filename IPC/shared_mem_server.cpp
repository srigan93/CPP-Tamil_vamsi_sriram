#include<iostream>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<stdio.h>
using namespace std;
int main()
{
  key_t key = ftok("Sriram_memory",60);
  int shmid = shmget(key,1024,0666|IPC_CREAT);
  char *str = (char*) shmat(shmid,(void*)0,0);
  printf("Data Read from memory : %s \n" , str);
  shmdt(str);//detach from shared memory
  shmctl(shmid,IPC_RMID,NULL);
  return 0;
}

