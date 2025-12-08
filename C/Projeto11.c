#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void vetoresSoma(){
	int A[5], i, soma;
	printf("informe os valores das matriz A\n");
	for(i = 0; i < 5; i++){
		scanf(" %d", &A[i]);
	}
	for(i = 0; i < 5; i++){
		if(A[i] % 2 == 1){
			soma += A[i];
		}
	}
	printf("matriz A: \n");
	for(i = 0; i < 5; i++){
		printf("A[%d] = %d\n", i, A[i]);
	}
	printf("\nA soma dos valores impares da matriz:\n");
	for(i = 0; i < 5; i++){
		if(A[i] % 2 == 1){
			printf("+ %d\n", A[i]);
		}
	}
	printf("----\n");
	printf("  %d\n", soma);
	
}

void matrizArranjo(){
	int A[3][3], B[3][3], i, j;
	printf("informe os valores da matriz A\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf(" %d", &A[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if(i == j){
				B[i][j] = A[i][j] * 2;
			} else {
				B[i][j] = A[i][j] * 3;
			}
		}
	}
	printf("\nMatriz A:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf(" %d", A[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz B:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf(" %d", B[i][j]);
		}
		printf("\n");
	}
}

void matrizBubbleSort(){
	int i, j, k, l, c, x;
	printf("informe o numeros de linhas e colunas da matriz\n");
	scanf(" %d %d", &l, &c);
	
	int A[l][c];
	printf("informe os valores da matriz\n");
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf("A[%d][%d] = ", i, j);
			scanf(" %d", &A[i][j]);
		}
	}
	printf("Matriz A:\n");
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf(" %d", A[i][j]);
		}
		printf("\n");
	}
	
	for(k = 0; k <= c; k++){
		for(i = 0; i < l; i++){
			printf("case: %d\n", i);
			for(j = 0; j < (c - 1); j++){
				if((A[i][j]) > (A[i][j + 1])){
					x = A[i][j];
					A[i][j] = A[i][j + 1];
					A[i][j + 1] = x;
				}
			}
			for(i = 0; i < l; i++){
				for(j = 0; j < c; j++){
					printf(" %d", A[i][j]);
				}
				printf("\n");
			}
			printf("check linha\n");
			if((A[i][c - 1]) > (A[i + 1][0])){
				printf("linha check\n");
				x = A[i][c - 1];
				A[i][c - 1] = A[i + 1][0];
				A[i + 1][0] = x;
			}
		}
	}
	
	printf("Matriz A after soft:\n");
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf(" %d", A[i][j]);
		}
		printf("\n");
	}
}

void multMatriz(){
	int A[2][2], B[2][3], C[2][3], i, j;
	printf("informe as matrizes A e B:\n");
	printf("Matiz A:\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("A[%d][%d]:\n", i, j);
			scanf(" %d", &A[i][j]);
		}
	}
	printf("Matiz B:");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("B[%d][%d]:\n", i, j);
			scanf(" %d", &B[i][j]);
		}
	}
	printf("Matiz C:\n");
 	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			if(i == 0){
				C[i][j] = (A[i][i] * B[i][j]) + (A[i][i + 1] * B[i + 1][j]);
			} else if(i == 1){
				C[i][j] = (A[i][i - 1] * B[i - 1][j]) + (A[i][i] * B[i][j]);
			}
		}
	}
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf(" %d", C[i][j]);
		}
		printf("\n");
	}
}

void cStrings(){
	char nome[5];
	printf("insira seu nome e sobrenome\n");
	fgets(nome, 7, stdin);
	printf("Nome completo : %s\n", nome);
}



void main(){
	// Begin
	setlocale(LC_ALL,"Portuguese");

	// Content
	//matrizBubbleSort();
	//multMatriz();
	//cStrings();
	
	// End
	system("pause");
}

