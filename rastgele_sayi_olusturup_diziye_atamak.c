#include <stdio.h>
#include <stdlib.h>
#include <time.h> //srand(time(0))

#define SIZE 5

void main(){
	
	float f[SIZE]={0},f_toplam,f_ortalama,i_ortalama;
	int i[SIZE]={0},i_toplam,sayac;
	
	srand(time(0));
	
	printf("rand()= %d\n",rand());
	printf("RAND_MAX= %d\n\n",RAND_MAX);
	
	for(sayac=0;sayac<SIZE;sayac++){
		f[sayac]=(float)rand()/RAND_MAX; //0 ile 1 arasýndaki ondalýklý sayýlar
		f_toplam+=f[sayac];
	}
	
	for(sayac=0;sayac<SIZE;sayac++){
		printf("f[%d]=%f\n",sayac,f[sayac]);
	}
	
	printf("\nf dizisi toplami= %f\n",f_toplam);
	f_ortalama=(float)f_toplam/SIZE;
	printf("f dizisi ortalamasi= %f\n",f_ortalama);
	
	printf("\nTam sayi dizisi\n\n");
	for(sayac=0;sayac<SIZE;sayac++){
		i[sayac]=rand()%101; // 0 ile 100 arasýndaki tam sayýlar.
		i_toplam+=i[sayac];
	}
	
	for(sayac=0;sayac<SIZE;sayac++){
		printf("i[%d]= %d\n",i,i[sayac]);
	}
	
	printf("\ni dizisi toplami= %d\n",i_toplam);
	i_ortalama=(float)i_toplam/SIZE;
	printf("i dizisi ortalamasi= %f\n",i_ortalama);
	
}
