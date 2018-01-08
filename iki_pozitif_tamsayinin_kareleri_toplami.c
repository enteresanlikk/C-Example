#include <stdio.h>
/*
	c=a^2+b^2
	iki pozitif tamsayinin kareleri toplami hesaplama.
	c girilecek, a ve b bulunacak.
*/

void main(){
	int c,a,b,hesapla;
	printf("C yi giriniz: "); scanf("%d",&c);
	
	for(a=1;a<c;a++){
		
		for(b=a;b<c;b++){
			hesapla=a*a+b*b;
			if(hesapla==c && a!=b){
				printf("%i=%i^2+%i^2\n",c,a,b);
			}
		}
		
	}
	
}
