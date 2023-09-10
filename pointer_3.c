/*********************************************
 This Program is to demo basic pointer opeations 
 **********************************************/
#include<stdio.h>
void main()
{
	int *p,*q, a[10];
	char *c;
	p = q;//Allowed to assin pointer of same type
	q = p; // Allowde  to assign pointer of same type
	p=a;     //  
        q =a; 
      // a = p;//a is newmonic not a pointer not allowed
      //  c = p && p= c //Not allowed : As compiler connt handle scaling when pointer arithemic is done like p++
     	p = p+3;	      //Adding and subtracting integer.

		//
	printf("\nNumber of elements between P and Q including q %ld\n",(p-q+1));
        (p == NULL);

}
