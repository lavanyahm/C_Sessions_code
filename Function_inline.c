//Demo function

#include<stdio.h>
//inline Function proto type

//static
__always_inline int max(int x, int y)

{

        return (x > y)? x:y;
     // return x;

}
void main()
{

	int a =100, b =20;
	int maximum = max(a,b);
	printf("\nMaximum = %d\n",maximum);
}


