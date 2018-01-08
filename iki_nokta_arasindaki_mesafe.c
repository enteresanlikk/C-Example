#include <stdio.h>
#include <math.h>

void main(){
	float x1,x2,y1,y2,sonuc;
	
	printf("A(x1,y1): "); scanf("%f,%f",&x1,&y1);
	printf("B(x2,y2): "); scanf("%f,%f",&x2,&y2);
	sonuc=sqrt(pow((y2-y1),2)+pow((x2-x1),2));
	printf("\n\nAradaki mesafe: %f",sonuc);
	
}
