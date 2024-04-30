#include <stdio.h>

int main(int argc, char** argv){
	int c;
	FILE *pa;
	char *nome = "seila.txt";
	
	if((pa = fopen(nome, "r")) == NULL){
		printf("\nNao foi possivel abrir o arquivo.\n");
		exit(1);
	}
   printf("\nimprimindo\n");
   c = fgetc(pa);
   while(!feof(pa)){
	   putchar(c);
	   c = fgetc(pa);
   }
   fclose(pa);
   getchar();
	return 0;
}