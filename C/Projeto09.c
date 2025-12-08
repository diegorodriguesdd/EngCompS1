#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


void asterisco(){
	int i;
	for(i = 0; i <= 12; i++){
		printf("*******");
		if (i > 12 - 1){
			printf("\n\n");
		}
	}
}

void impares(){
	int quant;
	printf("Até que numeros primo deve ser mostrado?\n\n");
	scanf(" %d", &quant);
	int i;
	for(i = 1; i <= quant; i++){
		if(i%2 == 0) continue;
		printf("%d\n", i);
	}
}

void crescAltura(){
	int chicoH, zeH;
	chicoH = 150;
	zeH = 110;
	int y;
	for(y = 1; zeH <= chicoH; y++){
		chicoH += 2;
		zeH += 3;
	}
	printf("Apos %d anos Ze tem %dcm de altura e Chico tem %dcm de altura\n\n", y, zeH, chicoH);
}

void crescAlturaProf(){
	int chicoH = 150;
	int y = 0;
	int zeH = 110;
	for (zeH; zeH <= chicoH; zeH += 3){
		y++;
		chicoH += 2;
		printf("Ze: %d / Chico: %d / Anos : %d\n", zeH, chicoH, y);
	}
	printf("Apos %d anos Ze tem %dcm de altura e Chico tem %dcm de altura\n\n", y, zeH, chicoH);
}

void matriz(){
	int i, j, l, c, ch;
	printf("Quantas linhas e quantas colunas possue a matriz, e qual o caracter?\n");
	scanf(" %d %d %c", &l, &c, &ch);
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf("%c", ch);
		}
		printf("\n");
	}
	printf("\n\n");
}

void forFuncionamento(){
	int i = 0, z = 100;
	int c;
	for(c = 5, z = 10; c != i; c++, i += 2){
		printf("i: %d\n", i);
		printf("c: %d\n", c);
		printf("z: %d\n\n", z);
	}
	printf("i: %d\n", i);
	printf("c: %d\n", c);
	printf("z: %d\n\n", z);
}

void magicTrick(){
	int secret_number = 7;
	int i;
	for(i = 1 ; ; i++){
		int guess;
		printf("Adivinhe 1 numero de 1 a 20\n");
		scanf(" %d", &guess);
		if(guess == secret_number) {
			printf("Acertou!\n");
			break;
		}
		else printf("Errou!\n");
	}
}

void piramide(){
	int blocks;
	printf("Quantos blocos a piramide tera?\n");
	scanf(" %d", &blocks);
	int i ,j = 0;
	for(i = 1; i <= blocks; i++){
		blocks -= i;
		printf("b: %d | j: %d | i: %d\n", blocks, j, i);
	}
	printf("A piramide tera %d camadas e sobraram %d blocos\n", i - 1, blocks);
}

void fibonacci(){
	int i, j = 1, k = 0, l;
	for(i = 1; i <= 15; i++){
		l = j + k;
		printf("%d\n", l);
		j = k;
		k = l;
	}
}

void main(){
	// Begin
	setlocale(LC_ALL,"Portuguese");
	
	// Content
	asterisco();
	//impares();
	//crescAltura();
	//crescAlturaProf();
	matriz();
	//forFuncionamento();
	//fibonacci();
	//magicTrick();
	//piramide();
	asterisco();
	
	// End
	system("pause");
}

