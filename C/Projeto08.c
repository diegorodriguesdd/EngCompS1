#include <stdio.h>

// Estruturas de repeticao

void strctWhile(){
	int n = 1;
	while(n <= 10){
		printf("**********\n");
		n++;
	}
}

void askNum(){
	int a, b, c, r;
	int n = 1;
	printf("Quantas somas seram executadas?");
	scanf(" %d", &r);
	while(n <= r){
		if(n == 1){
			printf("Informe dois numeros\n");
			scanf(" %d %d", &a, &b);
			c = a + b;
			printf("%d + %d = %d\n", a, b, c);
		} else {
			printf("informe outro numero\n");
			scanf(" %d", &a);
			printf("%d + %d = %d\n", c, a, c + a);
			c = c + a;
		}
		n++;
	}
}

void fatorial(){
	int a, n;
	unsigned long long b;
	printf("informe o numero\n");
	scanf(" %d", &a);
	n = a;
	while (n != 0){
		if(a != 1){
			if(n == a){
				b = n;
			} else {
				b *= (a - n);
			}
			n--;
		} else {
			b = 1;
			n = 0;
		}
	}
	printf("%d! = %llu\n", a, b);
}

void fatorialBonito(){
	int n, fat;
	fat = 1;
	printf("digite um numero");
	scanf(" %d", &n);
	scanf("%d! = ", n);
	while(n > 0){
		fat *= n;
		n--;
	}
	printf("%d", fat);
}

void mediaWhile(){
	float a, b, c;
	a, b = 0;
	do {
		printf("informe um numero\n");
		scanf(" %f", &a);
		b += a;
		if(a > 0) c++;
	} while (a != 0);
	printf("foram digitados %.f numeros, a soma dos numeros e %.f e a media dos numeros e %.1f", c, b, b/c);
}

void numsFor(){
	int n, m;
	m = 2;
	for(n = 1; n <= 19; n++){
		if(n <= 10){
			printf("%d\n", n);
		} else {
			printf("%d\n", n - m);
			m++;
			m++;
		}
	}
}


void main(){
	numsFor();
}
