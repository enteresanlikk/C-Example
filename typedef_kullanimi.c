#include <stdio.h>

typedef struct ogrenci{
	char isim[20];
	int yas;
	float ortalama;
}student;

typedef int i;
i a=5;

void main(){
	
	student kisi={"Bilal",19,89},kisi2={"Mustafa",15,50};
	printf("%i\n\n",a);
	printf("Kisi isim: %s\n",kisi.isim);
	printf("Kisi yas: %i\n",kisi.yas);
	printf("Kisi ortalama: %f\n",kisi.ortalama);
}
