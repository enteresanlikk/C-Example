#include <stdio.h>

struct insan{
	char isim[20];
	char soyad[20];
	int yas;
};

void main(){
	struct insan insan1={"Bilal","Demir",19};
	struct insan insan2;
	printf("Insan1 isim: %s\n",insan1.isim);
	printf("Insan1 soyad: %s\n",insan1.soyad);
	printf("Insan1 yas: %i",insan1.yas);
	printf("\n\n");
	printf("Insan2 isimi giriniz: "); scanf("%s",&insan2.isim);
	printf("Insan2 soyad giriniz: "); scanf("%s",&insan2.soyad);
	printf("Insan2 yas giriniz: "); scanf("%i",&insan2.yas);
	printf("\n\n");
	printf("Insan2 isim: %s\n",insan2.isim);
	printf("Insan2 soyad: %s\n",insan2.soyad);
	printf("Insan2 yas: %i\n",insan2.yas);
}
