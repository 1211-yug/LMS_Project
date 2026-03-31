#include<stdio.h>

main()
{
	int i,j,r,c;
	int ro,co,rowSum=0,coSum=0;
	int a[10][10];
	
	printf("Enter the array's row size:- ");
	scanf("%d",&r);
	
	printf("\nEnter the array's cloumn size:- ");
	scanf("%d",&c);
	
	printf("\nEnter array's element:- \n");
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter row number:- ");
	scanf("%d",&ro);
	
	printf("Elements of row %d:- ",ro);
    for(j=0 ; j<c ; j++)
    {
        printf("%d ",a[ro][j]);
        rowSum = rowSum + a[ro][j];
    }
    printf("\nThe sum of a row %d:- %d\n",ro,rowSum);
	
	printf("\nEnter column number:- ");
	scanf("%d",&co);
	
	printf("Elements of column %d:- ", co);
    for(i=0 ; i<r ; i++)
    {
        printf("%d ",a[i][co]);
        coSum = coSum + a[i][co];
    }
    printf("\nThe sum of column %d:- %d",co,coSum);
	
}