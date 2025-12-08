#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float volEsf(float raio){
	return (4/3) * 3.14 * (raio * raio * raio);
}

float calcMed(float nota01, float nota02, float nota03, char med){
	if((nota01 < 0) || (nota02 < 0 || nota03 < 0)){
		printf("Insira valores válidos");
		return 0;
	}
	if(med == 'a'){
		return ((nota01 + nota02 + nota03) / 3);
	} else if(med == 'p'){
		return ((nota01*5 + nota02*3 + nota03*2) / (5 + 3 + 2));
	} else if(med == 'h'){
		return (3 / ((1 / nota01) + (1 / nota02) + (1 / nota03)));
	} else {
		printf("insira uma opção valida para media");
		return 0;
	}
}

float baskara(float a, float b, float c){
	printf("delta = %f", (b * b) - (4 * a * c));
	return (b * b) - (4 * a * c);
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int menu;
	char md;
	float r, n1, n2, n3, media, a, b, c, delta, r1, r2;
	printf("[1] Volume esfera\n[2] Calculo de media\n[3] Baskara\n");
	scanf("%d", &menu);
	switch(menu){
		case 1 :
			printf("Informe o raio\n");
			scanf(" %f", &r);
			printf("Volume: %f\n", volEsf(r));
			break;
		case 2 :
			printf("notas 01, 02, 03 e tipo de media aritmetica(a), ponderada(p), harmonica(h)\n");
			scanf(" %f %f %f %c", &n1, &n2, &n3, &md);
			media = calcMed(n1, n2, n3, md);
			if(media == 0){
				return 0;
			}
			if(md == 'a'){
				printf("A media aritimetica das notas é %.1f\n", media);
			} else if (md == 'p'){
				printf("A media ponderada das notas é %.1f\n", media);
			} else if (md == 'h'){
				printf("A media harmônica das notas é %.1f\n", media);
			}
			break;
		case 3 :
			printf("informe os coeficientes de 'a', de 'b' e de 'c'\n");
			scanf(" %f %f %f", &a, &b, &c);
			delta = baskara(a, b, c);
			if(delta < 0){
				printf("A equação não possue raizes reais\n");
			} else if (delta == 0){
				r1 = -b / (2 * a);
				printf("A equação possue 2 raizes reais e iguais; r1 = r2 = %.1f\n", r1);
			} else {
				r1 = ((-b + (pow(delta, (1/2))) ) / (2 * a) );
				r2 = ((-b - (pow(delta, (1/2))) ) / (2 * a) );
				printf("A equaçõa possue 2 raizes reais e distintas; r1 = %.1f e r2 = %.1f\n", r1, r2);
			}
			break;
	}
	return 0;
	/*
	
	*/


	
	
}


