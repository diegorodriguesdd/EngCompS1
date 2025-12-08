#include <stdio.h>
#include <math.h>

// Rept I
void ego(){
								char nome[20];
								printf("Qual seu nome?");
								scanf(" %s", nome);
								for(int i = 0; i < 10; i++){
																printf(" %s\n", nome);
								}
}

void escada(){
								int l, i, j, k = 2;
								char c;
								printf("quantas linhas a devem ser geradas e qual char?");
								scanf(" %d %c", &l, &c);
								for(l; l >= 0; l--){
																for(i = 0; i < k; i++){
																								printf(" %c", c);
																}
																printf("\n");
																k++;
								}
}

void piram(){
								int h, c, b = 1, i, j, k = 2;
								
								printf("qual a alturq da piramide e qual o caracter?\n");
								scanf(" %d %c", &h, &c);
								char piram[h][1 + (2 * (h - 1))];
								for(j = 0; j < (h * 2) - 1; j++){
																for(i = (h - 1); i >= 0; i--){
																								if(b != 0){
																																piram[i][j] = c;
																																b--;
																								} else {
																																piram[i][j] = ' ';
																								}
																}
																if(j < (h - 1)){
																								b = k;
																								k++;
																								if(j == h - 2){
																																k = h - 1;
																								}
																} else {
																								b = k;
																								k--;
																}
								}
								for(i = 0; i < h; i++){
																for(j = 0; j < (h * 2) - 1; j++){
																								printf(" %c", piram[i][j]);
																}
																printf("\n");
								}
}

// Rep II
int sumN(){
								int X, i, sum = 0;
								printf("informe um numero maior que 0 e menor que 500\n");
								scanf(" %d", &X);
								if((X > 500) || (X < 0)){
																printf("informe um valor valido\n");
																return 0;
								}
								for(i = 1; i <= X; i++){
																sum += i;
								}
								printf("O somatorio dos inteiros positivos ate %d: \n", X);
								for(i = 1; i <= X; i++){
																if(i < X){
																								printf(" %d +", i);
																} else {
																								printf(" %d = %d", i, sum);
																}
								}
								return 0;
}

void tabuada(){
								int tab, i;
								printf("Informe um numero para ver sua tabuada ate 10\n");
								scanf(" %d", &tab);
								for(i = 1; i <= 10; i++){
																printf("%d * %d = %d\n", tab, i, tab * i);
								}
}

void multFour(){
								int i;
								printf("Multiplos de 4 menores que 200\n");
								for(i = 4; i <= 200; i+=4){
																printf("%d\n", i);
								}
}

void perfSqr(){
								int i;
								printf("Quadrados dos numeros de 15 a 180\n");
								for(i = 15; i <= 180; i++){
																printf("%d² = %d\n", i, i * i);
								}
}

void powNum(){
								int x, i;
								printf("informe um numero\n");
								scanf(" %d", &x);
								for(i = 0; i <= 9; i++){
																//printf("%d^%d = %.1f\n", x, i, pow(x,i));
								}
}

void fator(){
								int n, i, fat = 1;
								printf("Qual numero deve ter seu fatorial calculado?\n");
								scanf(" %d", &n);
								for(i = n; i > 0; i--){
																fat *= i;
								}
								printf("Fatorial de %d:\n%d! =", n, n);
								for(i = n; i > 0; i--){
																if(i != 1){
																								printf(" %d *", i);
																} else {
																								printf(" %d = %d", i, fat);
																}
								}
}

void primos(){
								int i, j, count = 0;
								printf("Numeros primos ate 100:\n1, 2");
								for(i = 3; i <= 100; i+= 2){
																for(j = 1; j <= i; j++){
																								/*
																								if((j % 2 == 0) && (j != 2)){
																																j++;
																																continue;
																								}*/
																								if(i % j == 0){
																																//printf("%d e divs %d\n", i, j);
																																count++;
																																//printf("count: %d\n", count);
																								}
																}
																if(count == 2){
																								printf(", %d", i);
																}
																count = 0;
								}
}

int main(){
								//ego();
								//piram();
								//escada();
								//sumN();
								//tabuada();
								//multFour();
								//perfSqr();
								//powNum();
								//fator();
								primos();
								
								return 0;
}
