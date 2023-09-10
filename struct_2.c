//Demostrating Array of Structures
#include<stdio.h>


struct Ex{
		int i;
		char c;
 };


void main()
{

	struct Ex x[2];
	
	x[0].i =10;
	x[0].c = 'a';

	x[1].i =20;
	x[1].c = 'b';

	printf("Struct x[0].i = %d\n",x[0].i);
	printf("Struct x[0].c = %c\n",x[0].c);
	
	printf("Struct x[1].i = %d\n",x[1].i);
	printf("Struct x[1].c = %c\n\n",x[1].c);
	
}

	
