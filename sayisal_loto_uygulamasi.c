#include <stdio.h>
#include <time.h>

//1 - 49 arasi 6 farklý rastgele sayinin uretilmesi
#define SIZE 6

void uret(){
	int loto[SIZE]={0},i,j;
	
	loto[0]=(rand()%49)+1;
	for(i=1;i<SIZE;i++){
		
		loto[i]=(rand()%49)+1;
		etiket:
		for(j=0;j<i;j++){
			if(loto[i]==loto[j]){
				loto[i]=(rand()%49)+1;
				goto etiket;
			}
		}
	}
	
	for(i=0;i<SIZE;i++){
		printf("%d\t",loto[i]);
	}
}

void main(){
	int a,satir=1;
	srand(time(0));
	printf("Satir sayisini giriniz: ");
	scanf("%d",&satir);
	for(a=0;a<satir;a++){
		printf("%d. satir= ",a+1);
		uret();
		printf("\n");
	}
}
