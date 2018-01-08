#include <stdio.h>

#define PI 3.14
#define alan(r) PI*r*r
#define cevre(r) 2*PI*r

void main(){
	float yaricap,alan,cevre;
	printf("Yaricapi giriniz: "); scanf("%f",&yaricap);
	printf("Daire alani: %f\n",alan(yaricap));
	printf("Daire cevresi: %f",cevre(yaricap));
	#undef PI
}
