#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void main(){
	float dizi[SIZE]={0},min,max;
	int i,rastgele;
	srand(time(0));
	
	for(i=0;i<SIZE;i++){
		dizi[i]=rand()%101;
		printf("dizi[%d]=%f\n",i,dizi[i]);
	}
	
	min=dizi[0];
	for(i=1;i<SIZE;i++){
		if(dizi[i]<min){
			min=dizi[i];
		}
		if(dizi[i]>max){
			max=dizi[i];
		}
	}
	
	printf("\nEn buyuk eleman: %f\n",max);
	printf("En kucuk eleman: %f\n",min);
}
