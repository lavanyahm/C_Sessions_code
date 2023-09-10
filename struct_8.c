#include<stdio.h>

struct Student{
		int Roll_No;
		char name[10];
		float fees;
 };


void main()
{

	struct Student student1 = { 1, "Lavanya", 33.33};
	struct Student student2 = { 2, "Varsha",44.44};


	printf("\n ***************Student data**************\n");

	printf("\tStudent1.Roll_No = %d \n",student1.Roll_No)  ;
	printf("\tStudent1.name    = %s\n ", student1.name );
	printf("\tStudent1.fees    = %f\n\n ",student1.fees );

	printf("\tStudent1.Roll_No = %d \n",student2.Roll_No)  ;
	printf("\tStudent2.name    = %s\n ", student2.name );
	printf("\tStudent2.fees    = %f\n ", student2.fees );
}

