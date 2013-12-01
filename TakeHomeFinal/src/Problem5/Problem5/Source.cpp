#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void delayfunction(int id);


int main(int argc, char argv[]){
	printf("Implementation of Problem 5\n");
	printf("\n\n=========================================\n\n");
	
	omp_set_num_threads(8);
	omp_set_dynamic(8);
	int id;
	double inittime, finaltime;
#pragma omp parallel private(id,inittime,finaltime)
	{

		
		inittime = omp_get_wtick();
		id = omp_get_thread_num();
		delayfunction(id);
		finaltime = omp_get_wtime() - inittime;
		printf("\n\nExecution delay time of Thread %d: %f\n",id, finaltime);
		printf("\n\n=========================================\n\n");
		


	}
	
	
	return 0;
}





void delayfunction(int id){
	
	printf("\nStarting delay function from the Thread %d\n", id);
	int i;
	for (i = 0; i < 100000; i++);


}