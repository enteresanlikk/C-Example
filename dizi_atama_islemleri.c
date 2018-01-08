#include <stdio.h>
#include <float.h>

#define SIZE 5

void main(){
	int dizi1[SIZE],i,sayi,dizi4[SIZE]={0};
	float dizi2[]={1.2,5.3,2.1};
	char dizi3[]={'a','b','c','d','\0'};
	
	for(i=0;i<SIZE;i++){
		printf("Diziye atanacak %d. sayiyi giriniz: ",i);
		scanf("%d",&sayi);
		dizi1[i]=sayi;
	}
	printf("\n\n");
	for(i=0;i<SIZE;i++){
		printf("dizi1[%d]=%d\n",i,dizi1[i]);
	}
	printf("\ndizi2\n\n");
	for(i=0;i<3;i++){
		printf("dizi2[%d]=%.1f\n",i,dizi2[i]);
	}
	printf("\ndizi3\n\n");
	for(i=0;i<4;i++){
		printf("dizi3[%d]=%c\n",i,dizi3[i]);
	}
	printf("\ndizi4\n\n");
	for(i=0;i<SIZE;i++){
		printf("dizi4[%d]=%d\n",i,dizi4[i]);
	}
}
