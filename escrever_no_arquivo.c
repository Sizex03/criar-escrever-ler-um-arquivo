#include <stdio.h>

int main(int argc, char** argv){
	FILE *fp;
	char string[100];
	int i;
	fp = fopen("seila.txt", "w");
	if(!fp){
		printf("erro na abertura do arquivo");
		exit(1);
	}
	printf("entre com a string a ser gravada no arquivo");
	gets(string);
	for(i = 0; string[i]; i++)
    putc(string[i],fp);
    fclose(fp);
	return 0;
}