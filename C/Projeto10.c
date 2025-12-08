#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void asterisco(){
	int i;
	printf("\n");
	for(i = 0; i <= 12; i++){
		printf("*******");
		if (i > 12 - 1){
			printf("\n\n");
		}
	}
}

void guessNumberRand(){
	srand(time(NULL)); // setando uma seed com base no tempo para o rand, assim o rand sempre terá uma seed diferente gerando um valor diferente.
	int myNumber = rand() % 100;
	int guess, i;
	for (i = 1; ;i++){
		printf("Guess a number\n");
		scanf(" %d", &guess);
		if(guess > myNumber){
			printf("Muito alto\n");
		} else if (myNumber > guess){
			printf("Muito baixo\n");
		} else {
			printf("O numero era %d, e voce acertou em %d tentativas\n", myNumber, i);
			break;
		}
	}
}

void mediasEscolar() {
	int i, j;
	float nota , media, turma;
	for(i = 1; i <= 3; i ++){
		for(j = 1; j <= 4; j++){
			printf("Informe as nota %d do aluno %d\n", j, i);
			scanf(" %f", &nota);
			media += nota;
		}
		printf("A media do aluno %d e : %.2f\n", i, media/4);
		turma += media/4;
		media = 0;
	}
	printf("A media da turma é : %.2f\n", turma/3);
}

void mediaVetores(){
	int i;
	float nota, notas[4];
	for (i = 0; i < 4; i++){
		printf("Informe a nota %d\n", i + 1);
		scanf(" %f", &notas[i]);
	}
	for (i = 0; i < 4; i++){
		printf("Nota %d: %.2f\n", i + 1, notas[i]);
	}
}

void vetoresV(){
	int v[10], u[10], i;
	printf("informe valores da matriz V\n");
	for (i = 0; i < 10; i++){
		scanf(" %d", &v[i]);
	}
	for (i = 0; i < 10; i++){
		if(i % 2 == 0){
			u[i] = v[i] * 5;
		} else {
			u[i] = v[i] + 5;
		}
	}
	for(i = 0; i < 10; i++){
		printf("V[%d] = %d | U[%d] = %d\n", i, v[i], i, u[i]);
	}
}

void main(){
	// Begin
	setlocale(LC_ALL,"Portuguese");

	// Content
	asterisco();
	
	//guessNumberRand();
	//mediasEscolar();
	//mediaVetores();
	vetoresV();
	
	asterisco();

	// End
	system("pause");
}
