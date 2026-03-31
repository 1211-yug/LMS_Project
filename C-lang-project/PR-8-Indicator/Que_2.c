#include<stdio.h>

	// Que 2. Develop a program to find cubes of all elements from  a given 2D array using  pointer with UDF.

int cube(int *p){
	return (*p) * (*p) * (*p);
}

void main(){
	
	int n,i,j;
	
	printf("Enter array's' size:- ");
	scanf("%d",&n);
	
	int a[n][n];
	int *ptr[n][n];
	
	printf("\nEnter array elements:- \n");
	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
            
            ptr[i][j] = &a[i][j];
		}
	}
	
	printf("\nCube of all elements:- \n\n");

	for(i=0 ; i<n ; i++){
		for(j=0 ; j<n ; j++){
			
			printf("%d ",cube(ptr[i][j]));
		}
		printf("\n");
	} 
	
	return 0;
}