//Demostraction of nested structure
#include<stdio.h>
/* Declaration of structure */
struct address
{
	 int houseno;
	 char street[10];
	 int stateno;
};

//Declaration of student structure
//Structure student use address structure
struct student{
		int Roll_No;
		char name[10];
		struct address adrs;   /* Nested structure */
 };


void main()
{

	 struct student student[2];

	 printf("Enter name and Roll_No number of student:\n");
	 scanf("%s%d",student[0].name, &student[0].Roll_No);

 	 printf("Enter street name, house number and state number:\n");
	 scanf("%s%d%d",student[0].adrs.street, &student[0].adrs.houseno, &student[0].adrs.stateno);
	 
	 
	 printf("Enter name and Roll_No number of  second student:\n");
	 scanf("%s%d",student[1].name, &student[1].Roll_No);
	
	 printf("Enter street name, house number and state number:\n");
	 scanf("%s%d%d",student[1].adrs.street, &student[1].adrs.houseno, &student[1].adrs.stateno);
	 	 
	
	printf("\n ***************student detail**************\n");

	printf("\tstudent1.Roll_No = %d \n",student[0].Roll_No)  ;
	printf("\tstudent1.name    = %s\n ", student[0].name );
	printf("\tstudent1.Address    = %s, %d, %d\n\n ",   student[0].adrs.street, student[0].adrs.houseno, student[0].adrs.stateno );


	printf("\tstudent1.Roll_No = %d \n",student[1].Roll_No)  ;
	printf("\tstudent1.name    = %s\n ", student[1].name );
	printf("\tstudent1.Address    = %s , %d , %d\n\n ",   student[1].adrs.street, student[1].adrs.houseno, student[1].adrs.stateno );
}

