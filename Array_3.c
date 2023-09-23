// C Program Multidimantional Array
#include <stdio.h>
void main()
{
       
	// Declare an array
	int var[4][3] ={10, 20,30,40,50,60,70,80,90,100,110,120};
	
	//Declare a variable to hold the index of y the array 
	int i, j;

	printf("\nElements of the array are:\n");
	for (i =0 ; i < 4 ;  i++)
	{
		for (j =0; j < 3 ; j++)
		{
			printf("%d\t", var[i][j]);
		}
		printf("\n");

	}
}


