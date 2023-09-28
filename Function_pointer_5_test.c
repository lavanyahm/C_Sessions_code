//Demo of function Pointer 
//Create array of Function pointer
#include <stdio.h>
 

int getSum(int, int);
int getDifference(int, int);
int getProduct(int, int);
int getDivision(int, int);
 
int main()
{
  // type-definition: 'functionPtr' now can be used as type
  typedef int (*functionPtr)(int, int);
 
  // assign the function's address
  functionPtr arrayFp[4] = {getSum, getDifference, getProduct, getDivision};
 
  int a = 50, b = 20;
  printf("Sum of %d and %d : %d\n", a, b, arrayFp[0](a, b));
  printf("Difference of %d and %d : %d\n", a, b, arrayFp[1](a, b));
  printf("Product of    %d and %d : %d\n", a, b, arrayFp[2](a, b));
  printf("Division of   %d and %d : %d\n", a, b, arrayFp[3](a, b));
 
  printf("\n************************************\nProduct of sum and difference of %d and %d is : %d\n\n", a, b, arrayFp[2](arrayFp[0](a, b),  arrayFp[1](a, b)));
}
 
int getSum(int x, int y)
{	
	printf("\n In Fun get Sum x= %d , y = %d\t\t", x, y);
      	return x + y;
}
 
int getDifference(int x, int y)
{
	printf("\n In Fun get diffrence x= %d , y = %d\t", x, y);
  return x - y;
}
 
int getProduct(int x, int y)
{
	printf("\n In Fun get product x= %d , y = %d\t", x, y);
  return x * y;
}
 
int getDivision(int x, int y)
{
	printf("\n In Fun get division x= %d , y = %d\t", x, y);
  return x / y;
}

