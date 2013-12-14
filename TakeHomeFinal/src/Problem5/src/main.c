/*
 * main.c
 *
 *  Created on: Dec 13, 2013
 *      Author: ricardo
 */
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include "omp_implementations.h"

int main(int argv, int ** argc){


	int i,j,k,ii,jj,kk;

	// Dynamic implementation varying delay time
	printf("Dynamic Implementations: \n");
	printf(" ================================================================\n\n");
	for (i = 0;i<12;i+=2){
		for (ii = 0;ii<2;ii++){
			printf("\n---------------------------------------------\n");
			if(ii == 0){
				printf("Delay %d times  in nowait mode\n",i);

			}
			else{
				printf("Delay %d times  in no-nowait mode\n",i);
			}
			printf("\n---------------------------------------------\n");
			Dynamic(i,ii);
		}
	}
	printf(" ================================================================\n\n");


	// Static implementation varying delay time

	printf("Static Implementations: \n");
	printf(" ================================================================\n\n");
	for (j = 0;j<12;j+=2){
		for (jj = 0;jj<2;jj++){
			printf("\n---------------------------------------------\n");
			if(jj == 0){
				printf("Delay %d times  in nowait mode\n",j);

			}
			else{
				printf("Delay %d times  in no-nowait mode\n",j);
			}
			printf("\n---------------------------------------------\n");
			Static(j,jj);
		}
	}
	printf(" ================================================================\n\n");


	// Guided implementation varying delay time
	printf("Static Implementations: \n");
	printf(" ================================================================\n\n");
	for (k = 0;k<12;k+=2){
		for (kk = 0;kk<2;kk++){
			printf("\n---------------------------------------------\n");
			if(kk == 0){
				printf("Delay %d times  in nowait mode\n",k);

			}
			else{
				printf("Delay %d times  in no-nowait mode\n",k);
			}
			printf("\n---------------------------------------------\n");
			Guided(k,kk);
		}
	}
	printf(" ================================================================\n\n");

	return 0;
}
