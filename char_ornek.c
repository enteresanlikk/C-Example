#include <stdio.h>
#include <string.h>

void main(){
	char harf,isim[20],ad[20];
	
	
	printf("Bir harf giriniz: "); scanf("%c",&harf);
	printf("\n\nGirinlen harf : %c",harf);
	strcpy(ad,"Kelime"); // program içinde atama yapmak için strcpy kullanýlýr. strcpy(deðiþken isimi,"deðeri");
	printf("\n\nAd degiskenindeki deger : %s",ad);
	
	printf("\n\nIsiminizi girin(max 20): "); scanf("%s",&isim);
	printf("\nIsiminizin 3. harfi: %c",isim[2]);
	
}
