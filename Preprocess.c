#include <stdio.h>
#define p( n ) printf( "t*" #n " = %s", t##n )
char tsan[]="tsan";
int main()
{
    int x;
    x=p(san);
}
