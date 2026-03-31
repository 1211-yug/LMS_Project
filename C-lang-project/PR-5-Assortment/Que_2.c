#include<stdio.h>

void main()
{
	int ro,co,i,j,largest;
	int a[10][10];
	
	printf("Enter the array's  row size:- ");
	scanf("%d",&ro);
	
	printf("\nEnter the array's  column size:- ");
	scanf("%d",&co);
	
	
	printf("\nEnter array's elements:- \n");
	for(i=0 ; i<ro ; i++)
	{
		for(j=0 ; j<co ; j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	largest = a[0][0];
	
	for(i=0 ; i<ro ; i++)
	{
		for(j=0 ; j<ro ; j++)
		{
			if(a[i][j]>largest)
			{
				largest = a[i][j];
			}
		}
	}
	
	printf("\nThe largest element is:- %d",largest);
	
}
