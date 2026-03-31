#include<stdio.h>

main(){

	//Que 3. first and last digit sum.
	
	int n,fd,ld,rev;
	printf("Enter any numbers:- ");
	scanf("%d",&n);
	
	ld = n % 10;
	
	while(n > 10){
		n = n / 10;
		fd = n;
		rev = fd + ld;
			
	}	
	
	printf("The sum of the first and last digit:- %d",rev);
	
}

