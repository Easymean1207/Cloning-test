/*
	File: 201835502_¿Ã¡ˆπŒ.c
	Author: lee jimin (dlwlals1207@gachon.ac.kr)
	Date: 2022_09_13
	Recently update: 2022_09_14
	Course: Problem Solving Method

	Summary of File:
	This file contains code that can calculate N1+N2, N1*N2, N1/N2, N1%N2.
	This code use test datasets.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	void calculate(int *n1,int *n2,int *sum, int *mul, int *div, int *mod)

	Summary of the caculate function:
		calculates n1+n2, n1*n2, n1/n2, n1%n2

	Parameter:
		input : n1, n2
		output: sumResult, multiplyResult, divisionResult, modularResult

	Return Value:
		n1+n2, n1*n2, n1/n2, n1%n2
	
*/
void calculate(int *n1,int *n2,int *sum, int *mul, int *div, int *mod);

int main()
{
	int n1Set[] = {10,10,999999,-1,-9999};
	int n2set[] = { 5,0,-1,999999,9998 };

	int sum[5] = { 0 };
	int	mul[5] = { 0 };
	int	div[5] = { 0 };
	int mod[5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		int n1 = n1Set[i];
		int n2 = n2set[i];

		calculate(&n1, &n2, &sum[i],&mul[i], &div[i],&mod[i]);
	
		if (div[i] == -99999999 || mod[i] == -99999999)	//divideByZero case
		{
			printf("[%d]:sum:%d  //  mul:%d  //  div:divideByZero occur  //  mod:divideByZero occur\n", i + 1, sum[i], mul[i]);
		}

		else
		{
			printf("[%d]:sum:%d  //  mul:%d  //  div:%d  //  mod:%d\n", i + 1, sum[i], mul[i], div[i], mod[i]);
		}
	}

	
	return 0;
}

void calculate(int* n1, int* n2, int* sum,int* mul, int* div, int *mod)
{
	*sum = *n1 + *n2;
	*mul = *n1 * *n2;

	if (*n2 == 0) //divideByZero case
	{
		*div = -99999999;
		*mod = -99999999;
	}
	else
	{
		*div = *n1 / *n2;
		*mod = *n1 % *n2;
	}

	
}