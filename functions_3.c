#include<stdio.h>
/* Demo to check 
 * if the value of variable chanegs when passed to 
 * Function.
 * what is the address of formal parametrs adn actual parameters
 *
 */
void  Function(int*);


int main()
{
  
	int x= 10;


	printf("\n I am  in Main ::   Before passing value to functionn  Value  of x =  %d  and Address of   x=  %p \n", x, &x);

        //Calling Function and passing x
	Function(&x);
	printf("\n I am  in Main ::   After passing value to functionn  Value  of x =  %d  and Address of   x=  %p \n", x, &x);


	return 0;

}


void Function(int *x)
{
 
	printf("\n I am  in Function ::   Before modification  Value  of x =  %d  and Address of   x=  %p \n", *x, &x);
	*x = 20;
	printf("\n I am  in Function ::   After modification  Value  of x =  %d  and Address of   x=  %p \n", *x, &x);
}

