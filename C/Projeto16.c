#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

// Ponteiros Kappa

void pont1(){
	int count = 10;
	int *p;
	p = &count;
	printf("*p = %d\n", *p);
	*p = 12;
	printf("*p = %d\n", *p);
	printf("count = %d\n", count);
}

void pont2(){
	int *p, *p1, x = 10;
	float y = 20.0;
	p = &x;
	printf("*p = %d\n", *p);
	p1 = p;
	printf("*p1 = %d\n", *p1);
	p = &y;
	printf("*p = %d\n", *p);
	printf("*p = %f\n", *((float*) p));
}

void pont3(){
	int *p = 0x5DC;
	printf("hex = %p Dec = %d\n", p, p);
	p++;
	printf("hex = %p Dec = %d\n", p, p);
	p += 15;
	printf("hex = %p Dec = %d\n", p, p);
	p -= 2;
	printf("hex = %p Dec = %d\n", p, p);
}

void pont4(){
	int *p, x = 10;
	p = &x;
	printf("*p = %d\n", *p);
	*p = *p + 1;
	(*p)++;
	printf("*p = %d\n", *p);
	*p *= 10;
	printf("*p = %d\n", *p);
}

int main(void){
	
	// Begin
	setlocale(LC_ALL,"Portuguese");

	// Content	
	//pont1();
	//pont2();
	//pont3();
	pont4();
	
	// End
	system("pause");
	
	//return 0;
}
