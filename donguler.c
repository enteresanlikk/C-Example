#include <stdio.h>

void main(){
	/* FOR */
	int i;
	printf("For dongusu\n");
	for(i=1;i<=10;i++){
		printf("%i\t",i);
	}
	
	/* WHILE */
	int a=1;
	printf("\nWhile dongusu\n");
	while(a<=10){
		printf("%i\t",a);
		a++;
	}
	
	/* DO-WHILE */
	int b=1;
	printf("\nDo-While dongusu\n");
	do{
		printf("aa\t");	
		b++;
	}while(b<=5);
	
}
