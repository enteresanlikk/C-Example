#include <stdio.h>
#include <ctype.h>

void harf_sorgulama1(char harf){
	char lower_harf=' ';
	int asci_kodu;
	
	asci_kodu=(int)harf;
	
	if(asci_kodu>=65 && asci_kodu<=90){
		asci_kodu+=32;
	}
	lower_harf=(char)asci_kodu;
	
	// a e u i o  - A E U I O
	switch(lower_harf){
		case 'a':
		case 'e':
		case 'u':
		case 'i':
		case 'o':
			printf("%c sesli harftir.",harf);
			break;
		default:
			printf("%c sessiz harftir.",harf);
			break;
	}
}

void harf_sorgulama2(char harf){
	char harf2=tolower(harf);
	// a e u i o  - A E U I O
	switch(harf2){
		case 'a':
		case 'e':
		case 'u':
		case 'i':
		case 'o':
			printf("%c sesli harftir.",harf);
			break;
		default:
			printf("%c sessiz harftir.",harf);
			break;
	}
	
}

void main(){
	char harf=' ';
	printf("Bir harf giriniz: "); scanf("%c",&harf);
	harf_sorgulama2(harf);
	
}
