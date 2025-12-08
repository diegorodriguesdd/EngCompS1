#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

void divi(float a, float b){
	 printf("%f", a / b);
}

void main(){
	setlocale(LC_ALL,"Portuguese");
	float a, b;
	scanf(" %f %f", &a, &b);
	divi(a, b);

/*
	// 01
	int a, b;
	printf("insira 2 números\n");
	scanf(" %d %d", &a, &b);
	if(a > b){
		printf("%d é maior que %d\n", a, b);
	} else {
		printf("%d é maior que %d\n", a, b);
	}
	
	// 02
	float x1, y1, x2, y2;
	printf("informe os 2 pontos (x,y)\n");
	scanf("%d %d", x1, y1);
	printf("Primeiro ponto (%d, %d)");
	scanf("%d %d", x2, y2);
	printf("Segundo ponto ponto (%d, %d)");
*/

/*
	float a, b;
	scanf("%f %f", &a, &b);
	//printf("%f\n", roundf(a+b));
	if(roundf(a+b) == (a+b) ){
		printf("%.f", a+b);
	} else {
		printf("%.2f", a+b);
	}
*/


	
}
