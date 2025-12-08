#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int menu(int count){
	// Menu da aplicação
	printf("Escolha a aplicação!\n\n");
	printf("[1] Consumo médio de um veículo\n");
	printf("[2] Celsius para Fahrenheit\n");
	printf("[3] Conversão real para dolar\n");
	printf("[4] Valor de venda de um produto\n");
	printf("[5] Custo ao consumidor de um carro novo\n");
	printf("[6] \n");
	printf("[7] \n");
	printf("[8] \n");
	printf("[9] \n");
	printf("[10] \n");

	int q;
	scanf("%d", &q);

	// Checkar se q é um valor válido
	int qRange[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int qSize = sizeof(qRange) / sizeof(qRange[0]);
	int i = 0;
	int ind = 0;
	for (i ; i < qSize; i++){
		if (qRange[i] == q){
			ind++;
		}
	}
	if (ind != 1){
		printf("Insira um valor válido!\n");
		return q;
	} else {
		printf("\n");
		return q;
	}
	
}

int main() {
	setlocale(LC_ALL,"Portuguese");

	int m = menu(0);
	if (m != 0 ){
		if(m == 1){
			// Questão 01
			printf("Consumo médio de um automóvel!\n");
			printf("informe a distância percorrida(KM) e o total de combustível gasto(L)\n");
			int km, lts;
			scanf("%d %d", &km, &lts);
			printf("O consumo médio do automovel é de %dKM/L\n", km / lts);
		}
		if(m == 2){
			// Questão 02
			printf("Celsius para Fahrenheit\n");
			printf("Informe a o valor em Celsius a ser convertido\n");
			int cel;
			scanf("%d", &cel);
			printf("%d graus celsius equivalem a %d graus fahrenheit\n", cel, (cel * 9 / 5) + 32);
		}
		if(m == 3){
			// Questão 03
			printf("Conversão dolar para real\n");
			printf("Informe o valor em dolares a ser convertido e a cotação do dolar\n");
			float usd, cot;
			scanf("%f %f", &usd, &cot);
			printf("%.2fUSD equivalem a %.2fBRL", usd, usd*cot);
		}   
		if(m == 4){
			// Questão 04
			printf("Valor de venda de um produto\n");
			printf("informe o custo do produto e o percentual adicional do cliente\n");
			float prc, adc;
			scanf("%f %f", &prc, &adc);
			printf("O valor de venda do produrto é de R$%.2f\n", prc * adc);
		}
		if(m == 5){
			// Questão 05
			printf("Custo ao consumidor de um carro novo");
			printf("Informe o custo de fabrica");
		}
		if(m == 6){

		}
		if(m == 7){

		}
		if(m == 8){

		}
		if(m == 9){

		}
		if(m == 10){

		}
	}
	system("pause");
	return 0;
}
