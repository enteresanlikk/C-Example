/*
4000'in tam katlari artýk degil

100'un katlari
400'e kalansiz bolunenler artik
400'e kalansiz bolunemeyenler artik deðil

4'ün katlarý artik
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
int yil;


printf("\nArtik yil tespiti");
printf("\n=================\n");

printf("\nKontrol edilecek yili giriniz: ");
scanf("%d",&yil);
//A:mod4000 B:mod100 C:mod400 D:mod4
//A'B'D + A'CD + A'BC

if(yil%4000==0) printf("%d artik yil degildir.",yil);
else if(yil%100==0 && yil%400==0)printf("%d artik yildir.",yil);
else if(yil%100==0 && yil%400!=0)printf("%d artik yil degildir.",yil);
else if(yil%4==0)printf("%d artik yildir.",yil);
else printf("%d artik yil degildir.",yil);

getch();
}

