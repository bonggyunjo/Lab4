/**
system programming lab4 2.2
create by jbg
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#define THREAD_NUMBER 7
void *thread_func(void *arg){
	printf("Thread : I`m [%p]Thread\n",arg);
	return arg;
}

void main(){
	pthread_t tid[THREAD_NUMBER];
	int status;
	int i;

	for(i = 0;i<THREAD_NUMBER;i++){
	status =0;
	status = pthread_create(&tid[i],NULL,thread_func,(void*)i);

	if(status !=0){

		fprintf(stderr,"Create thread %d: %d\n",i,status);
		exit(1);
		}
	}
	pthread_exit(NULL);
	return;
}	
