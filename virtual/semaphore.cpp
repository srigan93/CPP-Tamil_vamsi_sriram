#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
sem_t mu; //semaphore decleration
void *thread(void *arg)  //to backhandle arguments
{
  //wait
    sem_wait(&mu); //locking here
      printf("\n Tamil came first ");
        //critical section
              //sem_post(&mu);
          sleep(4);
              printf("\n Tamil Exit");
              sem_post(&mu);
              }
              int main()
              {
                sem_init(&mu,0,1);
                  pthread_t t1,t2;
                    pthread_create(&t1,NULL,thread,NULL);
                      sleep(2);
                        pthread_create(&t2,NULL,thread,NULL);
                          pthread_join(t1,NULL);
                            //pthread_join(t2,NULL);
                              sem_destroy(&mu);
                                return 0;
                                }
  
