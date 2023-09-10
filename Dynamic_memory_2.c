//Program to demo realloc

#include <stdio.h>
#include <stdlib.h>

int main() {

	//*ptr: pointer to hold the dynamically allocated memeory
	//n1: number of bytes required  initially 
	//n2: number of bytes required  later 
	int *ptr, i , n1, n2; //A pointer 

	printf("Enter size: ");
	scanf("%d", &n1);


	//Allowcating memery dynamically
	
	ptr = (int*) malloc(n1 * sizeof(int));

	printf("\t Addresses of previously allocated memory:\n");

	if( ptr ==NULL){
		printf("Memery allocation is unsucessfull!!!\n");
		exit(0);
	}


	for(i = 0; i < n1; ++i)
	    printf("%pc\n",ptr + i);
	
      	printf("\nEnter the new size: ");
	scanf("%d", &n2);

	  // rellocating the memory
	  ptr = realloc(ptr, n2 * sizeof(int));

	  printf("\tAddresses of newly allocated memory:\n");
	  for(i = 0; i < n2; ++i)
	   {	
       		  printf("%pc\n", ptr + i);
	   }
  
	  free(ptr);

  return 0;
}
