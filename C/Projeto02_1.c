#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Projeto02
int main () {
	// Set portuguese
	setlocale(LC_ALL,"Portuguese");

	// Content

	// multiple variables
		int m = 1, n = 2, o = 3;
		printf("%i \n", m + n + o);

	// string
		char s = 'a';
		printf("%c \n", s);

		char myString[] = "String";
		printf("%s \n", myString);

	// power notation
		float f1 = 2e3; // 2 * 10^3; pode ser usado 'e' ou "E"
		printf("%.2f\n", f1); // %.5 antes do f faz com que sejam mostrado apenas 2 digitos apos a virgula

	// Aula
		// soma
		int soma, x, y;
		x = 10;
		y = 50;
		printf("Esse Programa soma 2 números\n");
		soma = x + y;
		printf("o valor da soma é %d\n", soma);
		// sem usar uma terceira variavel
		printf("o valor da soma é %d\n", x + y);

		// soma com scanf
		int x01, y01;
		printf("Entre com o  1ro valor e com o 2do valor!\n");
		scanf("%d %d",&x01, &y01);
		printf("o valor da soma é %d\n", x01 + y01);

	// Return
	system("pause");
	return 0;
}
