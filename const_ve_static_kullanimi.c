//const ve static kullanýmý

#include <stdio.h>
#include <conio.h>

const double akb = 1.67e-27; 

void foo(); //alt fonksiyonun bildirimi

int main(){

printf("%e\n",akb); //ustel gosterim
printf("%.30f\n",akb); //ondalýk gösterim  .30=> virgulden sonra 30 hane

//foo icerisinde olusturulan static int sa degiskeninin degisimini inceleyin
foo();
foo();
foo();

printf("\nKapatmak icin bir tusa basin!\n");
getch();
return 0;
}


void foo()
{
    int a = 10;
    static int sa = 10;

    a += 5;
    sa += 5;

    printf("a = %d, sa = %d\n", a, sa);
}

