//Implement power function

#include<stdio.h>
long power( int, int);

int main()
{

   int base, n;
   printf("Enter Base value and power value\n");
   scanf ("%d%d",&base, &n);
   printf("\n %d to pwer of %d = %ld ",base, n,power(base, n));
   return 0;
}

long power (int base, int n)
{
	long p;
	for (p=1 ;n > 0; n--)
	{
	  p = p *base;
	}
	return p;	

}

