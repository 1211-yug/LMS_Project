#include<stdio.h>

int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int mul(int a, int b){
	return a*b;
}

int divi(int a, int b){
	return a/b;
}

int mod(int a, int b){
	return a%b;
}


void main(){
	
	int choice,fn,sn;
	
	do{
		
		printf("\nPress 1 for +\n");
		printf("Press 2 for -\n");
		printf("Press 3 for *\n");
		printf("Press 4 for /\n");
		printf("Press 5 for %\n");
		printf("Press 0 for the exit\n");
		
		printf("\nEnter your choice:- ");
		scanf("%d",&choice);
		
		if(choice >= 1 && choice <=5){
			
			printf("Enter the first number:- ");
			scanf("%d",&fn);
		
			printf("Enter the second number:- ");
			scanf("%d",&sn);
		}
	
		switch(choice){
			case 1: 
				printf("Addition of %d and %d is %d\n",fn,sn,add(fn,sn));
				break;
			case 2: 
				printf("Subtraction of %d and %d is %d\n",fn,sn,sub(fn,sn));
				break;
			case 3: 
				printf("Multiplication of %d and %d is %d\n",fn,sn,mul(fn,sn));
				break;
			case 4: 
				printf("Division of %d and %d is %d\n",fn,sn,divi(fn,sn));
				break;
			case 5: 
				printf("Modulus of %d and %d is %d\n",fn,sn,mod(fn,sn));
				break;
			case 0:
				printf("Exiting program...\n");
				break;
				
			default: 
				printf("Invalid choice\n");
		}
		
	} while (choice != 0);
			
	return 0;
	
}