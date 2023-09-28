//Calling Function with out Function pointer


#include<stdio.h>

void callback_fn( void )
{
    printf(" \n**In callback function**\n");
}
  
void test_loop( void )
{
            callback_fn();
	    printf("\n I am in Caller Fucntion ");
            callback_fn();
    
}
  
int main()
{
    test_loop();
  
    return 0;
}

