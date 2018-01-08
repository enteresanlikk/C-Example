#include <stdio.h>
#define SIZE 10

int g[SIZE];

int main(){
int y[SIZE];
int i;
for (i = 0; i < SIZE; ++i)
	printf("g[%d] = %d\n", i, g [i]);
for (i = 0; i < SIZE; ++i)
	printf("y[%d] = %d\n", i, y [i]);

getch();
return 0;
}

