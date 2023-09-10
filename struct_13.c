//Demo of benifit of bit fields, code with out bit field
#include <stdio.h>
struct time
{
	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;
}; 

int main()
{

	struct time t = {11, 30, 10}; // Here t is an object of the structure time
				      // int a[10];
	printf("The time is %d : %d : %d\n", t.hours, t.minutes, t.seconds);
	printf("The size of time is %ld bytes.\n", sizeof(struct time));
	return 0; 
}
