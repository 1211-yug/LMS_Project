#include<stdio.h>

main(){
	
	//Que1. Alphabet skipper.
	
	char ch='a';
	
	do{
		printf("%c ",ch);
		ch = ch + 4;
					
	}while (ch <= 'z');
	
}
