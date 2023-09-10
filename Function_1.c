//Demo function

#include<stdio.h>
//Function proto type
int max(int , int );

void main()
{

	int a =100, b =20;
	int maximum = max(a,b);
	printf("\nMaximum = %d\n",maximum);
}

//Function defination
int max(int x, int y)
{

        return (x > y)? x:y;

}

