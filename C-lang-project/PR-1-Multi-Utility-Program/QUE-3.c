#include<stdio.h>

main(){
	
	//Que3. Triangle Angle Finder
    
    int FA,SA,TA;
    
    printf("Frist Angle:- ");
    scanf("%d",&FA);
    
    printf("Second Angle:- ");
    scanf("%d",&SA);
    
    TA = 180-(FA+SA);
    
    printf("Third Angle:- %d",TA);
	
}
