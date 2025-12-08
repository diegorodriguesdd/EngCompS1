#include <stdio.h>
#include <math.h>

int calcArea(int a, float x, float y){	
	switch (a){
		case 1:
			printf("Um circulo de raio %.1f tem %.1f de area", x, (3.14 * (x * x)));
			break;
		case 2:
			printf("Um quadrado de lado %.1f tem %.1f de area", x, x * x);
			break;
		case 3:
			printf("Um triangulo de base %.1f e altura %.1f tem %.1f de area", x, y, (x * y) / 2);
			break;
		default:
			printf("digite um valor valido");	
	}
}

void main() {
	int a;
	float x, y;
	printf("\nCalculo de areas\n");
	printf("[1] Circulo\n[2] Quadrado\n[3] Triangulo\n");
	scanf("%d", &a);
	if(a == 1){
		printf("informe o raio do circulo\n");
		scanf(" %f", &x);
		calcArea(a, x, 0);
	} else if(a == 2){
		printf("informe o lado do quadrado\n");
		scanf(" %f", &x);
		calcArea(a, x, 0);
	} else if(a == 3){
		printf("informe a base e a altura do triangulo\n");
		scanf(" %f %f", &x, &y);
		calcArea(a, x, y);
	} else {
		printf("informe um valor valido");
	}
}
