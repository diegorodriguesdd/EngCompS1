#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// Ponteiros Kappa II

void pontPont(){
	int x = 10, *p = &x, **p2 = &p;
	printf("Endereco de p2: %p\n", p2);
	printf("Valor de *p2: %p\n", *p2);
	printf("Valor de **p2: %d\n", **p2);
}

int main(void){
	
	// Begin
	setlocale(LC_ALL,"Portuguese");

	// Content	
	pontPont();
	
	// End
	system("pause");
	
	//return 0;
}
