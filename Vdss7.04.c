#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf("Please enter a character :");
	scanf("%c",&c);
	
	if (c>= 'A' && c <= 'Z')
	   printf("lowecare character = %c",c + 'a' - 'A');
	else  
	   printf("character entered is = %c",c); 
	return 0;
}