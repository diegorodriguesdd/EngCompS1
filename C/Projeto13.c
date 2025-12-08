#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void strSort(){
	char nomes[3][40], aux[40];
	int i, j, l = 2; 
	
	for(i = 0; i < 3; i++){
		printf("informe o nome %d\n", i + 1);
		fgets(nomes[i], 40, stdin);
	}
	
	// bubbleSort de strings
	for(j = 0; j < l; j++){
		for(i = 0; i < 2; i++){
			if(strcmp(nomes[i], nomes[i+1]) > 0){ // stringCompare(strcmp(a, b)) compara o tamanho de 'a' e 'b' usando tabela ASCII;
				strcpy(aux, nomes[i + 1]); // stringCopy(strcpy(a,b)) copia valor de 'b' pra 'a';
				strcpy(nomes[i + 1], nomes[i]);
				strcpy(nomes[i], aux);
			}
		}	
		l--;
	}
	
	for(i = 0; i < 3; i++){
		printf("nome %d: %s", i+1, nomes[i]);
	}
	
	printf("Pesquise algum nome\n");
	fgets(aux, 40, stdin);
	for(i = 0; i < 3; i++){
		if(strcmp(nomes[i], aux) == 0){ // search o exato mesmo conjunto de chars;
			printf("%s encontrado, nome %d\n", aux, i + 1);
		}
		if((i == 2) & (strcmp(nomes[i], aux) != 0)){
			printf("Nome não encontrado");
		}
	}
}

// Struct

struct aluno{
	char nome[40];
	int n[4];
	float md;
};

struct aluno basisStruct(){
 	struct aluno alun;
	int soma = 0, i;
 	
	printf("Qual o nome do aluno?\n");
	scanf(" %[^\n]", &alun.nome);
 	//fgets(alun.nome, 40, stdin);
 	printf("Nome: %s\n", alun.nome);
 	/*int n = strcspn(alun.nome, '\0');
 	alun.nome[n] = '\0'; */
 	//alun.nome[strlen(alun.nome) - 1] = '\0';
 	
	for(i = 0; i < 4; i++){
 		printf("Qual a nota %d?\n", i + 1);
 		scanf(" %d", &alun.n[i]);
 		soma += alun.n[i];
	}
	
	alun.md = (float) soma / ( sizeof(alun.n) / sizeof(alun.n[0]) );
	return alun;
}

void medTurma(){
	int i, j, t, aux = 1;
	struct aluno auxA;
	
	// CreateTurma
	printf("Quantos aluno ha na turma?\n");
	scanf(" %d", &t);
	
	struct aluno turma[t];
	
	for(i = 0; i < t; i++){
		turma[i] = basisStruct();
	}
	
	// SortTurma
	for(i = 0; i < t - 1; i++){
		for(j = 0; j < t - aux; j++){
			if(strcmp(turma[j].nome, turma[j + 1].nome) > 0){
				auxA = turma[j];
				turma[j] = turma[j + 1];
				turma[j + 1] = auxA;
			}
		}
		aux++;
	}
	
	// ShowTurma
	for(i = 0; i < t; i++){
		printf("Aluno %d\nNome: %s com media: %.f\n", i + 1, turma[i].nome, turma[i].md);
	}
	
}	

int main(void){
	// Begin
	setlocale(LC_ALL,"Portuguese");

	// Content
	//strSort();
	medTurma();
	
	// End
	system("pause");
}
