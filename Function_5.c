
//Program to swap two numbers
//To demo  diffrenet data type paramets
#include<stdio.h>
void swap( int *, int *);
//void swap(float *, float*); 
void swap_float(float *, float*); 
void print_value(int x, int y, float a, float b);
void main(){

	int x, y;
	printf("Enetr the value of x nad y \n");
	scanf("%d%d",&x,&y);
	printf(" Before Fucntion call the value of x = %d and y= %d\n", x, y);
	swap(&x, &y);
	printf(" After fucntion call the value of x = %d and y= %d\n", x, y);

	float a= 20.0, b = 40.5;
  //     	swap(&a, &b);
  
	printf("\n Before Function call the value of x = %f and y= %f\n", a, b);
        swap_float(&a, &b);	
	printf("After Function call the value of x = %f and y= %f\n\n", a, b);
	print_value( x, y,  a,  b);


}

//void swap(float *i, float *j){ }
void swap_float(float *a, float *b)
{

	float temp;
	temp = *b;
	*b = *a;
	*a= temp;


}
void swap (int *a, int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a= temp;

}


void print_value(int x, int y, float a, float b)
{

	printf(" \n In Function print_value\n");
	printf(" the value of x = %d and y= %d\n", x, y);

	printf(" the value of x = %f and y= %f\n", a, b);

}
