// A simple C program to demonstrate callback mechanism
#include<stdio.h>

// Callback Function which has no argument and no return value
void callback_fn( void )
{
	printf(" \n***nIn callback function**\n");
}

void Caller_Function( void (*fn)(void) )
{
	fn();
	printf("\n I am in Caller Fucntion ");
	fn();
}
  
int main()
{
    // Registering the callback
    void (*fn_ptr)( void ) = &callback_fn;
      
    // calling the function with the function pointer
    Caller_Function(fn_ptr);
  
   return 0;
}

