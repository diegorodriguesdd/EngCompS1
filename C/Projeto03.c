#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Projeto03

int circulo() {
	// Calculo medida circunferência
	char c1 = 1, c2 = 2, c3 = 3;
	int i = 4, i2;
	float f = 5;
	printf("%p\n%p\n%p\n\n", &c1, &c2, &c3);
	printf("%p\n%p\n", &i, &f);
	printf("%p - %d\n\n", &i2, i2);

	// Calcular Circunferência
	const float pi = 3.14;
	float r;

	printf("informe o raio da circunferencia!\n");
	scanf("%f", &r);

	printf("O perimetro da  circunferência é : %.2f\n", 2 * pi * r);
	printf("A área da circunferência é : %.2f\n", pi * (r * r));
	printf("O diametro da circunferência é : %.2f\n\n", 2 * r);
}

int calculadora() {
	// Calculadora
	float a, b;
	char opers[] = {'+', '-', '*', '/'};
	char oper;

	printf("Informe a operação a ser realizada!\n");
	printf("[+] para adição\n[-] para subtração\n[*] para multiplicação\n[/] para divisão\n\n");
	scanf(" %c", &oper);

	// Checkar se o operador digitado é válido
	int i, ind;
	i = ind = 0;
	int l = sizeof(opers)/sizeof(opers[0]);
	for(i; i < l; i++) {
		if(oper != opers[i]){
			ind+= 1;
			printf("%d", ind);
			if(ind > 3) {
				printf("Informe um operador válido\n");
			}
		}
	}

	printf("informe os 2 numeros!\n");
	scanf("%f %f", &a, &b);

	if(oper == opers[0]){
		printf("A soma dos numeros é : %.1f\n", a + b);
	}
	if(oper == opers[1]){
		printf("A subtração dos numeros é : %.1f\n", a - b);
	}
	if(oper == opers[2]){
		printf("A multiplicação dos numeros é : %.1f\n", a * b);
	}
	if(oper == opers[3]){
		if (b == 0){
			if (a != 0){
				printf("Nao é possivel dividir %.1f por 0\n", a);
				return 0;
			}
			printf("indeterminado\n");
			return 0;
		}
		printf("A divisão dos numeros é : %.1f\n", a / b);
	}
}


int main () {
	// Set Portuguese
	setlocale(LC_ALL,"Portuguese");

	// Content
	/*
	int x = 5, y = 2;
	float s = (float) x/y;
	printf("%.1f\n", s);
	*/
	
	// Aula
	
	calculadora();
	
	
	// Return
	system("pause");
	return 0;
}
