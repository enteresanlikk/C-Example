#include <stdio.h>
#define SIZE 15

int main(){
int a[SIZE],i;
int k = 10;
int j = 5;


for(i=0;i<SIZE;i++)
	printf("\n%d",a[i]);

printf("\n\n");

//dizinin tum elemanlarý sýfýrlanýyor, ardýndan ekrana yazdýrýlýyor.
for (i = 0; i < SIZE; ++i)
	a[i] = 0;
for (i=0;i<SIZE;i++)
	printf("%d\n",a[i]);//dizinin tum elemanlarý

/* üstteki iki for yerine while dongusu kullanýlabilirdi
i = 0;
while (i < SIZE){
	a[i++] = 0;
	printf("\n%d",a[i-1]);}
*/

//alttaki uc satirda a dizisinin elemanlarýnda deðiþim oldu, inceleyin.
a[k++] = 100;
a[--j] = 200;
a[10]--;

for(i=0;i<SIZE;i++)
	printf("\na[%d]= %d",i,a[i]);

printf("\nk=%d",k);
printf("\nj=%d",j);


getch();
return 0;

}

