//Demo function

#include<stdio.h>
//Function proto type
int max(int , int );

int Sum(int, int, int);

void main()
{

	int a =100, b =20;

	int maximum = max(a,b);

	int sum = Sum(100,200,300);

	printf("\nMaximum = %d\n",maximum);
	printf("\nSum = %d\n",sum);

}

//Function defination
int max(int x, int y)
{

//       if (x > y) return x;       else return y;

        return (x > y)? x:y;

}

int Sum(int x, int y, int z)
{


	return (x+y+z);

}



