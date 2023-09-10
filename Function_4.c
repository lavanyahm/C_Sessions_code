//Demo function

#include<stdio.h>
//inline Function proto type

static inline int max(int x, int y)

{

        return (x > y)? x:y;

}
void main()
{

	int a =100, b =20;
	int maximum = max(a,b);
	printf("\nMaximum = %d\n",maximum);
}


