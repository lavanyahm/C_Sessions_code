#include <stdio.h>



struct time
{
	unsigned int hours: 5; // Size restricted to 5 bits
	unsigned int minutes:6; // Size restricted to 6 bits
	unsigned int seconds:6; // Size restricted to 6 bits
}; 


int main()
{

	struct time t = {11, 30, 10}; // Here t is an object of the structure time
	printf("\nTime Using bit fields!\n\n");
	printf("The time is %d : %d : %d\n", t.hours, t.minutes, t.seconds);
	printf("The size of time is %ld bytes.\n", sizeof(struct time));
	return 0; 
}
