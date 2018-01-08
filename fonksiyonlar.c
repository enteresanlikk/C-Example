#include <stdio.h>

float topla(float sayi1,float sayi2){
	
	return sayi1+sayi2;
	
}

void main(){
	float sayi1,sayi2;
	printf("Birinci sayi: "); scanf("%f",&sayi1);
	printf("Ikinci sayi: "); scanf("%f",&sayi2);
	
	printf("Toplam= %f",topla(sayi1,sayi2));
	
}
