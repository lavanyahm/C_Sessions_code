// C Program to access array elements using pointer
#include <stdio.h>
void main()

{
       
	
	// Declare an array
	float var[20] ;
	
	//Declare a variable to hold the index of y the array 
	int i, n;
	printf("\nEnter Array Size\n ");
	scanf("%d", &n);

	printf("\nElements of the array are:\n ");

	for (i = 0; i < n ;  i++)
	{
		 scanf("%f", &var[i]);
	}

	printf("\nElements of the array are:\n ");
	for(i=0;i<n;i++)
		printf("%f\n", var[i]);


}


