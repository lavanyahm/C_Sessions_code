// Program to 
// demo usage of calloc and 
// calculate the sum of n numbers entered by the user

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, *ptr, sum = 0;
  printf("\n\t Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*) calloc(n, sizeof(int));
  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }

  printf("\n\t Addresses of  allocated memory:\n");
  for(i = 0; i < n; ++i)
  {      
	    
            printf("%p\n",ptr + i);

            printf("\tcontents  %d\n",*(ptr + i));
  }


  printf("\n\tEnter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", ptr + i);
    sum += *(ptr + i);
  }

  printf("\n\tSum = %d", sum);
  free(ptr);
  return 0;
}

