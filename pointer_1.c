// C program to illustrate Pointers
#include <stdio.h>

void main()
{
	int var = 10;
	char a = 'd';


	// declare pointer variable
	int *ptr;                 
	// note that data type of ptr and var must be same
	ptr = &var;
	char *C_ptr = &a;

	// assign the address of a variable to a pointer
	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);
	
	printf("\nValue at ptr = %p \n", C_ptr);
	printf("Value at var = %c \n", a);
	printf("Value at *ptr = %c \n \n", *C_ptr);

	printf("Size of Pointer = %ld \n",sizeof(ptr));
	printf("\nSize of Pointer = %ld \n",sizeof ( C_ptr ));
	printf("Size of var = %ld \n",sizeof ( var ));
	printf("Size of char = %ld \n",sizeof ( char ));
}



