#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	
	/*
	printf("informe os 2 numeros!\n");
	scanf("%f %f", &a, &b);
	*/
	setlocale(LC_ALL,"Portuguese");
	/*
	int a, b,c;
	printf("Informe os lados do triangulo\n");
	scanf("%d %d %d", &a,&b,&c);
	if (a+b>c && b+c>a && c+a>b){
		if (a == b && b == c){
   			printf("Triângulo equilátero\n");
	   }
		if((a == b && b != c) || (b == c && c != a) || (c == a && a !=b)){
			printf("Triângulo isósceles\n");
		}
		if(a != b && b != c){
			printf("Triângulo Escaleno\n");
		}
	} else {
		printf("Não é um triângulo\n");
	}
	*/
	int x,y;
	printf("Insira números inteiro\n");
	scanf("%d %d", &x,&y);
	if(x > 0){
		if(y > 0) {
			printf("X e Y são positivos");
		}
		else if(y < 0) {
			printf("X é positivo e Y é negativo");
		}
		else {
			printf("X é positivo e Y é igual 0");
		}
	}
	if(x < 0){
		if(y > 0) {
			printf("X é negativo e Y é positivos");
		}
		else if(y < 0) {
			printf("X e Y são negativos");
		}
		else {
			printf("X é negativo e Y é igual 0");
		}
	}
	if(x = 0){
		if(y > 0) {
			printf("X é igual a 0 e Y é positivo");
		}
		else if(y < 0) {
			printf("X igual a 0 e Y é negativo");
		}
		else {
			printf("X e Y são iguais 0");
		}
	}
	system("pause");
	return 0;
}
