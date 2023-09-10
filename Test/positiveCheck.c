#include<stdio.h> 
int main() 
{
   	int number; 
    	do    
       	{
       		printf("enter the number\n"); 
		scanf("%d",&number);    
	   	printf("number is %d \n",number);   
     	} while (number<0);      
    	return 0; 
}
