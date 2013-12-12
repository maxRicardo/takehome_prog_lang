/*
 * openmp_problem.c
 *
 *  Created on: Dec 10, 2013
 *      Author: ricardo
 */


#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void delay(int delayTimes);



void main(int argc,char * argv[]){
	int id,i;
	double initTime,finalTime,result;
	omp_set_num_threads(8);

	printf("Initializing the process....\n\n");

#pragma omp parallel private(id,initTime,finalTime,result)
	{
		id = omp_get_thread_num();
		initTime = omp_get_wtime();
#pragma omp for schedule(static) nowait ordered
		for(i = 0;i<50;i++){
			printf("Working from thread %d\n",omp_get_thread_num());
			delay(1);
		}

		finalTime = omp_get_wtime();
		result = finalTime - initTime;

		printf("The process from Thread %d took %f seconds\n\n",id,result);

	}
}

//the delay function .... still think i should make something more complex that this though

void delay(int delayTimes){
	while(delayTimes != 0){
		int i;
		for(i = 0;i<50000;i++);
		delayTimes--;
	}
}
