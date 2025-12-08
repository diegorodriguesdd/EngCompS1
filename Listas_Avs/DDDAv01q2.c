#include <stdio.h>

float calcDesc(float valBrt){
	if((valBrt <= 100.0) && (valBrt > 0)) {
		return (valBrt - (valBrt * 5 / 100));	
	} else if ( (valBrt > 100.01) && (valBrt <= 500.0)) {
		return (valBrt - (valBrt * 10 / 100));
	} else {
		return (valBrt - (valBrt * 15 / 100));
	}
}

float calcBonus(float valLiq, char pag){
	if(pag == 'v'){
		return (valLiq - (valLiq * 3 / 100));
	} else if (pag == 'p'){
		return (valLiq + (valLiq * 5 / 100));
	} else {
		return 0;
	}
}

int main(){
	// Variaveis
	float valorBruto, valorLiquido, valorFinal;
	char formaPagamento;
	// Recebendo valores
	printf("Informe o valor bruto do produto(R$) e a forma de pagamento('v' para a vista e 'p' para a prazo)\n");
	scanf(" %f %c", &valorBruto, &formaPagamento);
	
	// Utilizando funcoes
	valorLiquido = calcDesc(valorBruto);
	valorFinal = calcBonus(valorLiquido, formaPagamento);
	// Catch error
	if(valorFinal == 0){ 
		printf("Informe uma forma de pagamento valida\n");
		return 0;
	}
	
	// Mostrando no console
	printf("O valor bruto do produto e de R$%.2f\n", valorBruto);
	printf("O valor do desconto e de R$%.2f\n", valorBruto - valorLiquido);
	printf("O valor liquido e de R$%.2f\n", valorLiquido);
	if(formaPagamento == 'v'){
		printf("O bonus da forma de pagamento e de R$%.2f\n", valorLiquido - valorFinal);	
	} else if (formaPagamento == 'p'){
		printf("O acrescimo da forma de pagamento e de R$%.2f\n", valorFinal - valorLiquido);
	} /**else {
		printf("Insira uma forma de pagamento valida\n");
	}*/
	printf("O valor final do produto e de R$%.2f",valorFinal);
	return 0;
}


