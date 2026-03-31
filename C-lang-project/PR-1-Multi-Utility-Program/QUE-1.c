#include<stdio.h>

main(){
	
	//Que1. Temperature Converter
	
	float C,Fah;
	
	printf("The temperature in Celsius:- ");
	scanf("%f",&C);
	
	Fah = (C*9/5)+32;
	
	printf("The temperaure in Fahrenheit:- %f",Fah);
	
}
