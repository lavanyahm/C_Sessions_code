//Demo use of Function pointer
//A narmal fucntion with an int paameter adn void return type
#include<stdio.h>
void fun ( int a)
{

	printf("\nin Function Value of a is %d\n",a);

}

int main()
{

	// Fun-ptr is a pointer to Function fun()
	void (*fun_ptr)(int) = &fun;
	/* The above line is equevant  to 
	 *void (*fun_ptr) (int);
	 *fun_ptr = &fun;
	 * */

	//invoking fun(0 using fun_ptr
	(*fun_ptr)(10);
	return 0;

}
