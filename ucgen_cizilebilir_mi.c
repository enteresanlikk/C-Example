#include <stdio.h>
#include <math.h>

void main(){
	float a,b,c;
	printf("Birinci kenar: "); scanf("%f",&a);
	printf("Ikinci kenar: "); scanf("%f",&b);
	printf("Ucuncu kenar: "); scanf("%f",&c);
	
	if(c<(a+b) && c>(a-b)){
		printf("Ucgen olusturulur.");
	}else{
		printf("Ucgen olusturulamaz!");
	}
}
