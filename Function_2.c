// call by Value
#include<stdio.h>
void fun(int);

void main()
{
 	int x = 20;

	fun(x);

	
	printf("\n %d\n",x);

}


void fun(int x){
	
	x = 30;
}



