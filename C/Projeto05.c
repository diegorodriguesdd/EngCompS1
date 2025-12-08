#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int calculadora(){
	// Calculadora
	float a, b;
	char opers[] = {'+', '-', '*', '/'};
	char oper;

	printf("Informe a operação a ser realizada!\n");
	printf("[+] para adição\n[-] para subtração\n[*] para multiplicação\n[/] para divisão\n\n");
	scanf(" %c", &oper);

	// Checkar se o operador digitado é válido
	int i = 0, ind = 0;
	int l = sizeof(opers)/sizeof(opers[0]);
	for(i; i < l; i++) {
		if(oper != opers[i]){
			ind+= 1;
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
		if (roundf(a / b) - (a / b) == 0){
			printf("A divisão dos numeros é : %.f\n", a / b);
		} else {
			printf("A divisão dos numeros é : %.1f\n", a / b);
		}
		
	}
}

void paridade(){
	printf("n\n");
	int d;
	scanf("%d", &d);
	if(d%2 == 0){
		printf("Par\n");
	} else {
		printf("Impar\n");
	}
}

void maiorNumero(){
	printf("insira 2 números\n");
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b){
		printf("%d é maior q %d\n", a, b);
	} else {
		printf("%d é maior q %d\n", b, a);
	}
}

void aprovado(){
	printf("insira 2 números\n");
	float a, b;
	scanf("%f %f", &a, &b);
	if((a+b)/2 >= 6){
		printf("Nota %.1f; Aprovado\n", (a+b)/2);
	} else {
		printf("Reprovado\n");
	}
}

void maisAlto(){
	printf("insira 2 alturas (ex.: 1,59)\n");
	float a, b;
	scanf("%f %f", &a, &b);

	if (a > b){
		printf("A primeira pessoa(%.2f) é maior que a segunda(%.2f)\n", a, b);
	} else {
		printf("A segunda pessoa(%.2f) é maior que a primeira(%.2f)\n", b, a);
	}
}

void maisPesado(){
	printf("insira 2 pesos (ex.: 66,5)\n");
	float a, b;
	scanf("%f %f", &a, &b);

	if (a > b){
		printf("A primeira pessoa(%.2f) pesa mais que a segunda(%.2f)\n", a, b);
	} else {
		printf("A segunda pessoa(%.2f) pesa mais que a primeira(%.2f)\n", b, a);
	}
}

void quadrilatero(){
	printf("insira os 4 lados do quadrilátero\n");
	float a, b, c, d;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if ((a == b) && (b == c) && (c == d) ){
  		printf("Esse quadrilátero é um quadrado\n");
	} else {
		printf("Esse quadrilátero não é um quadrado\n");
	}
}

void ordemCrescente(){
	float a, b, c;
	printf("Insira 3 números\n");
	scanf(" %f %f %f", &a, &b, &c);
	int c_a, c_b, c_c;
	if ((b >= c) && (b <= a)){
		printf("%.1f >= %.1f >= %.1f\n", a, b, c);
	} else if((c >= b) && (c <= a)){
		printf("%.1f >= %.1f >= %.1f\n", a, c, b);
	} else if((a >= c) && (a <= b)){
		printf("%.1f >= %.1f >= %.1f\n", b, a, c);
	} else if((c >= a) && (c <= b)){
		printf("%.1f >= %.1f >= %.1f\n", b, c, a);
	} else if((a >= b) && (a <= c)){
		printf("%.1f >= %.1f >= %.1f\n", c, a, b);
	} else if((b >= a) && (b <= c)){
		printf("%.1f >= %.1f >= %.1f\n", c, b, a);
	}
}

void imc() {
	float a, b;
	printf("Informe peso e altura(ex.: 69,2 e 1,70)\n");
	scanf(" %f %f", &a, &b);
	float imc = a / (b * b);
	char *cls;
	if (imc <= 18.49){
		cls = "abaixo do peso";
	} else if ((imc > 18.5) && (imc <= 24.99)){
		cls = "peso normal";
	} else if (imc >= 25) {
		cls = "acima do peso";
	}
	printf("Seu imc é %.2f; equivalente a %s\n", imc, cls);
}

void mediaAritimetica(){
	int a, b, c;
	printf("Insira as 3 notas\n");
	scanf(" %d %d %d", &a, &b, &c);
	printf("A media das notas é %.1f\n", (float) (a + b + c)/3);
}

void doadorS(){
	int a;
	printf("Informe a sua idade");
	scanf("%a", &a);
	if((a >= 16) && (a <= 69)) {
		printf("Você tem a idade necessaria para doar sangue!");
	} else {
		printf("Você não tem a idade necessaria para doar sangue!");
	}
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	// Lista I
 	int menu;
	printf("[1] Calculadora\n[2] Paridade\n[3] Maior número\n[4] Aprovado ou não\n");
	printf("[5] Mais alto\n[6] Mais pesado\n[7] Quadrado ou não\n[8] Ordem crescente\n");
	printf("[9] Calculo IMC\n[10] Média aritimética\n[11] Idade Doador sanguíneo\n");
	scanf("%d", &menu);
	if(menu == 1){
		calculadora();
	} else if (menu == 2){
		paridade();
	} else if (menu == 3){
		maiorNumero();
	} else if (menu == 4){
		aprovado();
	} else if (menu == 5){
		maisAlto();
	} else if (menu == 6){
		maisPesado();
	} else if (menu == 7){
		quadrilatero();
	} else if (menu == 8){
		ordemCrescente();
	} else if (menu == 9){
		imc();
	} else if (menu == 10){
		mediaAritimetica();
	} else if (menu == 11){
		doadorS();
	} else {
		printf("Digite um valor válido");
	}

	system("pause");
	return 0;
}
