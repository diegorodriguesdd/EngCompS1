#include <stdio.h> //Include adiciona as bibliotecas basicas do C
#include <locale.h>
#include <stdlib.h>

// Projeto01
int main() { 
// Main inicializa meu codigo
	/*
	aaaaaaaa
	bbbbbb
	*/
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Hello World!\n\"AAAAA\" \nI am learning C.\nAnd it is awesome!");
	// printf printa 
	
	int i = 123; // integer
	float f = 21.01; // float
	char c = 'A'; // char, aparentemente string n existe
	
	printf("\n"); // pular linha semelhante python
	printf("\n%d",i); // printar variavel necessita do '%' + inicial do tipo 
	//ex : p('%d')
	printf("\n%f",f);
	printf("\n%c",c);
	
	printf("\n%d é o valor do meu int i",i);
	printf("\n%c é meu char", 'D');
	
	i = 1234;
	printf("\nAgora meu int i tem o valor %d",i);
	
	printf("\n\nIntrodução linguagem C\n\tLocal: LMC02\n\tHorário: 16:00 - 18:00\n'Que a força esteja com vocês!'");
	
	int x = 1;
	int y = 1;
	int sum = x + y;
	printf("\nS = %d\n",sum); 
	
	pritf("")
	
	

	system("pause");
	return 0;
}
