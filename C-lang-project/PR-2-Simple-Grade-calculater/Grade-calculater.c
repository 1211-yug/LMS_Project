#include<stdio.h>

main(){
	
	float score;
	char grade;
	
	printf("Enter your score out of 100 :- ");
	scanf("%f",&score);
	
	grade = (score >= 90)
			? 'A'
			:(score >= 85)
			? 'B'
			:(score >= 70)
			? 'C'
			:(score >= 50)
			? 'D'
			: (score >= 40)
			? 'E'
			: 'F';
			
	printf("Your grade  is : %c ",grade);
			
	switch (grade) {
		case 'A':
			printf("\nExcellent Work!.");
			break;
		case 'B':
			printf("\nWell done.");
			break;
		case 'C':
			printf("\nGood job.");
			break;
		case 'D':
			printf("\nYou passed, but you could do better");
			break;
		case 'E':	
			printf("\nSorry,you failed.");
			break;
		default:
			printf("\nInvalid choice");
			break;
	}
	
	if (grade  == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
	{
		printf("\nCongratulations! You are eligible for the next level.");
	}
	else{
		printf("\nPlease try again next time.");
	}

}
