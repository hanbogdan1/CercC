#pragma once
#include "multime.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int * reuniune(int * a, int * b,int lg_a,int lg_b)
{

	int lg = lg_a + lg_b;
	int *c = (int*)malloc(sizeof(int)*lg);
	int i, j, k = 0;
	for (i = 0; i<lg_a; i++)
	{
		c[k] = a[i];
		k++;
	}

	for (i = 0; i<lg_b; i++)
	{
		int flag = 0;
		for (j = 0; j<lg_a; j++)
		{
			if (b[i] == a[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			c[k] = b[i];
			k++;
		}
	}
	return c;
}

/*
int * inintersecintie(int* a, int* b)
{

	int lg_a = sizeof(a) / sizeof(int);
	int lg_b = sizeof(b) / sizeof(int);
	int lg = max(lg_a, lg_b);
	int *c = (int*)malloc(sizeof(int)*lg);
	int i, j, k = 0;
	int flag = 0;
	for (int i = 0; i < lg_a; i++) {
		flag = 0;
		for (int j = 0; j < lg_b; j++)
			if (a[i] == b[j]) {
				flag = 1;
				break;
			}

		if (flag == 11)
			i++;
	}
	return NULL;
}

int* difereninta(int* a, int* b)
{
	return NULL;
}

*/

void afisare(int * a)
{
	int i;
	int lg_a = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < lg_a; i++) {
		printf("%d ", a[i]);
	}
}
