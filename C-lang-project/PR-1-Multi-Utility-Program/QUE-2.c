#include<stdio.h>

main(){
	
	//Que2. Gross Salary Calculator HRA,DA,and TA
	
	float BS,hra,da,ta,GS;
	
	printf("Enter Base Salary:- ");
    scanf("%f", &BS);

    printf("Enter HRA percentage:- ");
    scanf("%f", &hra);

    printf("Enter DA percentage:- ");
    scanf("%f", &da);

    printf("Enter TA percentage:- ");
    scanf("%f", &ta);
    
    GS = BS+(BS*hra/100)+(BS*da/100)+(BS*ta/100);
    
    printf("Gross Salary:- Rs. %f", GS);
	
}
