#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int mine(){
	time_t t;
	srand((unsigned) time(&t));
	float coins;
	FILE *xman;
	xman = fopen("/home/EAC.txt","w+");
	while(1){
		coins += 0.0000000001;
		int min = 1;
		coins -= min / 1000;
		
		if(coins == 1 || coins == 10 || coins == 0.1){
			fputc(coins,xman);
			printf("%f",coins);
		}
	}
	fclose(xman);
}