#include<stdio.h>

main(){
	
	//Que2. Digit Counter.
	
	int n,counter;
	printf("Enter any numbers:- ");
	scanf("%d",&n);
	
	do{
		counter++;
		n = n/10;
	}while(n != 0);
	
	printf("Total numbers of digits:- %d",counter);
}s
