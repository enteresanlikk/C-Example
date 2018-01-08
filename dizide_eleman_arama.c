#include <stdio.h>
#include <time.h>

#define SIZE 3

void main(){
	int dizi[SIZE]={0},i,sayi,var=0;
	
	srand(time(0));
	for(i=0;i<SIZE;i++){
		dizi[i]=rand()%51;
		printf("dizi[%d]=%d\n",i,dizi[i]);
	}
	printf("Aranacak elemani yaziniz: "); scanf("%i",&sayi);
	for(i=0;i<SIZE;i++){
		if(dizi[i]==sayi){
			var++;
		}
	}
	if(var!=0){
		printf("%d sayisi %d defa var.",sayi,var);
	}else{
		printf("%d sayisi dizide yok!",sayi);
	}
}
