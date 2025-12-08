#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// Unions

union tipo {
	short int x;
	unsigned char c;
};

void unionTest(){
	union tipo t;
	t.x = 1545;
	printf("x = %d\n", t.x);
	printf("c = %d\n", t.c);
	/* A memoria alocada é ocupada inteiramente por t.x(16 bits), 
	e t.c (8 bits) mostra os 8 primeiros bits de t.x */
	t.c = 69;
	printf("x = %d\n", t.x);
	printf("c = %d\n", t.c);
	/* O mesmo de antes, t.c sobreescreve os 8 primeiros bits de t.x(16 bits) alterando seu valor registrado na memoria */
}

// Enums

enum semana { Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado };

void enumTest(){
	enum semana s1, s2, s3;
	s1 = Segunda;
	s2 = Terca;
	s3 = s1 + s2;
	printf("Domingo = %d\n", Domingo);
	printf("s1 = %d\n", s1);
	printf("s2 = %d\n", s2);
	printf("s3 = %d\n", s3);
}

// Revisao

void addOne(int *n){
	printf("Dentro da funcao: x = %p\n", n);
	*n = *n + 1;
}

void useAddOne(){
	int x = 5;
	printf("Antes de funcao: x = %d\n", x);
	addOne(&x);
	printf("Antes de funcao: x = %d\n", x);
}

int main(void){
	// Begin
	setlocale(LC_ALL,"Portuguese");

	// Content
	//unionTest();
	//enumTest();
	useAddOne();
	
	// End
	system("pause");
}

