#include <stdio.h>
#include <string.h>

void main(){
	char harf,isim[20],ad[20];
	
	
	printf("Bir harf giriniz: "); scanf("%c",&harf);
	printf("\n\nGirinlen harf : %c",harf);
	strcpy(ad,"Kelime"); // program i�inde atama yapmak i�in strcpy kullan�l�r. strcpy(de�i�ken isimi,"de�eri");
	printf("\n\nAd degiskenindeki deger : %s",ad);
	
	printf("\n\nIsiminizi girin(max 20): "); scanf("%s",&isim);
	printf("\nIsiminizin 3. harfi: %c",isim[2]);
	
}
