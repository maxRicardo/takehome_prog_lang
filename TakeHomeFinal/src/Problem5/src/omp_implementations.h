/*
 * omp_implementations.h
 *
 *  Created on: Dec 12, 2013
 *      Author: ricardo
 */

#ifndef OMP_IMPLEMENTATIONS_H_
#define OMP_IMPLEMENTATIONS_H_


/**
 * Dynamic parallel implementation.
 * It runs a dummy function testing time over a delay
 * times this dummy function
 *
 * @param int timedelay,nowait
 *
 * timedelay = int value between 1-10 ; represents the times
 * the dummy function will b repeted
 *
 * nowait = it value between 1-0 to determine if either it
 * runs with the nowait option or not;
 */
void Dynamic(int timedelay,int nowait);


/**
 * Static parallel implementation.
 * It runs a dummy function testing time over a delay
 * times this dummy function
 *
 * @param int timedelay,nowait
 *
 * timedelay = int value between 1-10 ; represents the times
 * the dummy function will b repeted
 *
 * nowait = it value between 1-0 to determine if either it
 * runs with the nowait option or not;
 */
void Static(int timeDelay, int nowait);


/**
 * Guided parallel implementation.
 * It runs a dummy function testing time over a delay
 * times this dummy function
 *
 * @param int timedelay,nowait
 *
 * timedelay = int value between 1-10 ; represents the times
 * the dummy function will b repeated
 *
 * nowait = it value between 1-0 to determine if either it
 * runs with the nowait option or not;
 */
void Guided(int timeDelay,int nowait);

#endif /* OMP_IMPLEMENTATIONS_H_ */
