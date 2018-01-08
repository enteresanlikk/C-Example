#include <stdio.h>

void main(){
	char harf;
	int asci;
	git:
	printf("Donusturulecek harfi giriniz: "); scanf("%c",&harf);
	asci=(int)harf;
	if(asci>=65 && asci<=90){
		asci+=32;
		harf=(char)asci;
		printf("Harf buyuk, kucuk hali %c",harf);
	}else if(asci>=97 && asci<=122){
		asci-=32;
		harf=(char)asci;
		printf("harf kucuk, buyuk hali %c",harf);
	}else{
		printf("Lutfen harf giriniz!\n");
		goto git;
	}
}
