#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char** argv){
    FILE *fptr;
    char ch;
    
    fptr = fopen("seila.txt", "w"); 
    
    while((ch = getche()) != '\r'){
    	fputc(ch,fptr);	
	}
	fclose(fptr); 
	
	
	return 0;
}