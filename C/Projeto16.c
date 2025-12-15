#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

void brinks(){
	int count = 10;
	int *p;
	p = &count;
	
	printf("%d\n", count);
	printf("%p\n", &count);
	
	printf("%p\n", &p);
	
	printf("%p\n", p);
	printf("%d\n", *p);
}

int main(int argc, char **argv){
	
	/*int var;
	printf("argc = %d\n", argc);
	for(var = 0; var < argc; var++){
		printf("argv [%d] = %s\n", var, argv[var]);
	}
	*/
	
	brinks();
	
	return 0;
}
