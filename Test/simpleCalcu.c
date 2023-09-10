#include<stdio.h> 
#include<stdlib.h>
int main() {    
       	int operation;     
	int a, b;     
	int res;    
       	int choice; 
    	while(choice)  
     	{        
	       	printf("which operation u want to perfrom\n");             
		scanf("%d",&operation);    
	  	printf("enter two numerical numebrs");    
       		scanf("%d %d",&a,&b);     
	    	switch(operation)        
	       	{     
			case 1:   res=a+b;      

 				  printf("addition of two numbers are : %d",res); 
		  		  break;    
	       		case 2:    
		     		  res=a-b;      
		       		  printf("subtraction of two numbers are : %d",res);
		 		  break;  
	     		case 3:    
		     		  res=a*b;      
		       		  printf("multiplication of two numbers :%d",res);   
		    		  break;   
	      		case 4:     
		      		  res=a/b;    
		     		  printf("division of two numbers :%d",res);  
		   		  break;  
	     		case 5:     
			  	  exit(1);      
		 	default:     
		      		  printf("wrong choice\n");   
	  	}  
	    	printf("do you want to continue operation\n");  
	     	scanf("%d",&choice);     
       	} 
    	return 0; }
