#include<stdio.h>

main(){
	
	// Que 1. Length Finder, you need a C program that counts characters of a string using a pointer.
	
	char str[100];
	char *ptr;
	int len = 0;
	
	printf("Enter any string:- ");
	scanf("%[^\n]",&str);
	ptr = str;

	while (*ptr != '\0'){
        len++;
        ptr++;
    }
    
	printf("\nThe lenght of a string is:- %d",len);
	
	return 0;
}