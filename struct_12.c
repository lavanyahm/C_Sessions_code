//Self referal structure
#include<stdio.h>

struct {
		int i;
		char c;
		
   }x,y;

struct EXAMPLE{
	float f;
	int i;
	struct EXAMPLE *link;// self referal structure  

};



void main()
{
	
	struct EXAMPLE ex,ey,ez;
	
	x.i =10;
	x.c = 'a';

	ex.f = 100.1;
	ex.i = 99;

	printf("Struct x.i = %d  \n", x.i);
	printf("Struct x.c = %c  \n", x.c);
	
	printf("Struct ex.f = %f \n", ex.f);
	printf("Struct ex.i = %d \n", ex.i);
}

	
