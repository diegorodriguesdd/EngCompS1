#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void somar(){
	float a, b;
	printf("digite 2 números a serem somados\n");
	scanf(" %f %f", &a, &b);
	printf("O resultado é : %.2f", a + b);
}

void main () {
	// Set Portuguese
	setlocale(LC_ALL,"Portuguese");

	int menu;
	float a, b;
	
	printf("\tMenu Principal\n[1] Adição\n");
	scanf("%d", &menu);
	int menuR[] = {1};
	int i = 0;
	for(i; i < (sizeof(menuR)/sizeof(menuR[0])); i++){
		if(menuR[i] == menu){
			
		}
	}
	if(menu == 0){
		printf("insira um valor válido");
	}
	if(menu == 1){
		somar();
	}

	system("pause");
}
