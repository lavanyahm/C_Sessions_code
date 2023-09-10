// Pgm to Demo Charater Pointers 

#include<stdio.h>

#define POSITION 5
void main()
{
	 printf("Hello World");//String constant
	 char a[]="HelloWorld";
	 char *p = "Helloworld";  //
	 
	 printf("\n");
	 printf("\n %d th element of array a is %c\n",POSITION, a[POSITION]);
	 printf("\n %d th element of STRING a is %c\n",POSITION, p[POSITION]);

}



