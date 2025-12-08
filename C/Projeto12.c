#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


void charsTest(){
	char menu;
	printf("\n\n digite S para SAIR ou C para CONT. :");
	scanf(" %c", &menu);
	printf("OPÇÃO: %c\n", menu);

	printf("\n\n digite S para SAIR ou C para CONT. :");
	scanf(" %c", &menu);
	printf("OPÇÃO: %c\n", menu);
}

void charCoverter(){
	char c = '1'; // char '1' é equivalente a int 49 na tabela ASCII;
	int i = c - '0';// int i = 49 - 48 => int i = 1, '0' = 48 na tabela ASCII;
	
	char c2 = '9';
	int i2 = c2 - '0'; // i1 = 57 - 48;
	printf("char %c = int %d\n", c2, i2);
	
	int i3 = 9;
	int c3 = i3 + '0'; // char '9' = 57 = 9 + 48, 48 = '0';
	printf("int %c = char %d\n", c3, i3);
}

void nomesStrg(){
	char n[3][41];
	int i, j;
	printf("Insira 3 nomes\n");
	for(i = 0; i < 3; i++){
		//scanf(" %[^\n]", n[i]);
		fgets(n[i], 41, stdin);
		n[i][strlen(n[i]) - 1] = '\0';
	}
	for(i = 0; i < 3; i++){
		printf("%dro nome -> %s | nome.len -> %d\n", i + 1, n[i], strlen(n[i]));
		//puts(n[i]);
	}
}

void sortNums(){
	int i, x, a[5] = {5, 3, 4, 7, 8};
	for(i = 0; i < 4; i++){
		if(a[i] > a[i+ 1]){
			x = a[i];
			a[i] = a[i + 1];
			a[i + 1] = x;
		}
	}
	for(i = 0; i < 5; i++){
		printf("%d", a[i]);
	}
	printf("\n");
}

void sortStr(char str[]){
	int strLen = strlen(str);
	int i, j, s;
	for(i = 0; i < strLen; i++){
		for(j = 0; j < strLen - 1; j++){
			if(str[j] > str[j + 1]){
				s = str[j];
				str[j] = str[j + 1];
				str[j + 1] = s;
			}
		}
	}
	for(i = 0; i < strLen; i++){
		printf(" %c", str[i]);
	}
}



int main(void){
	// Begin
	setlocale(LC_ALL,"Portuguese");

	// Content
	//charsTest();
	//charCoverter();
	//nomesStrg();
	//sortNums();
	char a[5] = "zgjkd";
	sortStr(a);
	
	// End
	system("pause");
}
