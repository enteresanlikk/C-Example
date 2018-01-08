/*	ikinci dereceden denklemin koklerini bulan program
	ax^2 + bx + c = 0 formunda
	
	delta=b^2-4ac
	delta>0
	x1,2 = (-b -/+ delta^(1/2))/2a
	delta==0
	x1,2 = -b/2a
	digeer durumlar => reel kok yok
*/


#include <stdio.h>
#include <math.h>

void main(){
	float a,b,c,delta,x1,x2;
	
	printf("ax^2 + bx + c = 0\n\n");
	printf("Katsayilari aralarina virgul(,) koyarak yaziniz(a,b,c): ");
	scanf("%f,%f,%f",&a,&b,&c);
	delta=pow(b,2)-4*a*c;
	if(delta>0){
		x1=(-b -sqrt(delta)/(2*a));
		x2=(-b +sqrt(delta)/(2*a));
		printf("Kokler(x1, x2): %f %f",x1,x2);
	}else if(delta==0){
		x1=(-b/(2*a));
		x2=(-b/(2*a));
		printf("Kokler(x1, x2): %f %f",x1,x2);
	}else{
		printf("Reel kokleri yoktur!");
	}
	
}
