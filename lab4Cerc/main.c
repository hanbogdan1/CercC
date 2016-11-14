#include <stdio.h>
#include <math.h>
#include "multime.h"

/*

#define a 0
#define b 0
#define c 0
/*
TESTEAZA(i, j, n) – are valoarea 1 dacă i și j sunt în intervalul(0, n), altfel este 0
MEDIA(a, b, c) – determină media(ca valoare reală) celor trei numere întregi
POLINOM(x) – calculează valoarea polinomului 2x5 + 3x4 –x3 + 2x2 – 8x + 5
*/



#define TESTEAZA(i, j, n) ( (i) >0 && (i) <(n) && (j) >0 && (j) <(n) ? 1 :0)
#define MEDIA(a,b,c) ( ((float)((a)+(b)+(c))/3)  )
#define POLINOM(x) (  2* pow((x),5) + 3* pow((x),4) -pow((x),3) + 2* pow((x),2) - 8* (x) +5) 


int main() {
#if a
	printf("1. %d \n", TESTEAZA(2, 3, 10));
	printf("2. %d \n", TESTEAZA(2, 3, 3));
	printf("3. %d \n", TESTEAZA(2, 3, 1));
	printf("4. %d \n", TESTEAZA(31, 3, 6 ));
	printf("5. %d \n", TESTEAZA(4, 31, 10));
#endif


#if b
	printf("1. %f \n", MEDIA(1,2,3));
	printf("2. %f \n", MEDIA(4, 5, 3));
	printf("3. %f \n", MEDIA(7, -2, -3));
	printf("4. %f \n", MEDIA(10, 13, 6));
	printf("5. %f \n", MEDIA(2, 2, 4));
#endif

#if c
	printf("1. %lf \n", POLINOM(3));
	printf("2. %lf \n", POLINOM(1));
	printf("3. %lf \n", POLINOM(4));
	printf("4. %lf \n", POLINOM(5));
	printf("5. %lf \n", POLINOM(-3));
#endif


	/*
	 rezultatul este te tip int 
		rezolvare : Trebuie sa facem cast la float/double/etc
		#define AVG(x,y)    ((float)(x+y) / 2)


	*/

#define AVG(x,y)    (x+y) / 2

	//printf("%d \n ", AVG(1,4));




	int x;
	scanf("%d", &x);

}