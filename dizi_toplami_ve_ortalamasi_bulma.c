#include <stdio.h>

#define SIZE 5

void main(){
	int a[SIZE]={0},toplam=0,i;
	float ortalama;
	
	for(i=0;i<SIZE;i++){
		printf("%d. Elemani giriniz: ",i);
		scanf("%d",&a[i]);
		toplam+=a[i];
	}
	printf("Toplam: %d\n",toplam);
	ortalama=(float)toplam/SIZE;
	printf("Ortalama: %.1f\n",ortalama);
}
