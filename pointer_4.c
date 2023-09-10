// C program to illustrate Pointer Arithmetic

#include <stdio.h>

int main()
{

	// Declare an array
	int arr[3] = { 10, 100, 200 };

	// Declare pointer variable
	int* ptr;

	// Assign the address of v[0] to ptr
	ptr = arr;

	for (int i = 0; i < 3; i++) {

		// print value at address which is stored in ptr
		printf("Value of *ptr = %d\n", *ptr);

		// print value of ptr
		printf("Value of ptr = %p\n\n", ptr);

		// Increment pointer ptr by 1
		ptr++;
	}



	printf("\n Array Index  : contents   : address  \n");
	for (int i = 0; i < 3; i++) {

		// print value at address which is stored in ptr
		printf("\n  %d     :  %d         :   %p  \n", i, arr[i], &arr[i]  );

			
	}

	return 0;
}

