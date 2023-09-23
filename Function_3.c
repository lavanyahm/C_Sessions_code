
//Program to swap two numbers
#include<stdio.h>
void swap( int *, int *);
void main(){

	int x, y;
	printf("Enetr the value of x nad y");
	scanf("%d%d",&x,&y);
	swap(&x, &y);

	printf(" the value of x = %d and y= %d", x, y);
}

void swap (int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a= temp;

}


