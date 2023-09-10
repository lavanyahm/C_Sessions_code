#include <stdio.h>
//#define p( n ) printf( "t" #n  )
#define p( n ) printf( "t" #n " = %d", t##n )
int t3=10;
int main()
{
   p(3);
}
