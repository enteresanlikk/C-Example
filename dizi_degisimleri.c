#include <stdio.h>
#define SIZE 15

int main(){
int a[SIZE],i;
int k = 10;
int j = 5;


for(i=0;i<SIZE;i++)
	printf("\n%d",a[i]);

printf("\n\n");

//dizinin tum elemanlar� s�f�rlan�yor, ard�ndan ekrana yazd�r�l�yor.
for (i = 0; i < SIZE; ++i)
	a[i] = 0;
for (i=0;i<SIZE;i++)
	printf("%d\n",a[i]);//dizinin tum elemanlar�

/* �stteki iki for yerine while dongusu kullan�labilirdi
i = 0;
while (i < SIZE){
	a[i++] = 0;
	printf("\n%d",a[i-1]);}
*/

//alttaki uc satirda a dizisinin elemanlar�nda de�i�im oldu, inceleyin.
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

