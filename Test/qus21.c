#include <stdio.h>
#define world( n ) printf( "t^^" #n" = %c", t##n )
int t3=1;
int main()
{
   world(3);
}
