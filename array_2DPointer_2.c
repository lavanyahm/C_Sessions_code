//Program to access 2-D array using Pointer 

#define N_ROWS 2
#define N_COLMNS 3

#include<stdio.h>


void main ( ){

   int a[N_ROWS] [N_COLMNS], i,j;
   int *p;

   printf ("Enter elements of 2D array\n");
   for (i=0; i < N_ROWS ; i++){
      for (j=0; j < N_COLMNS; j++){
         scanf ("%d", &a[i] [j]);
      }
   }

   p = &a[0][0];//assing base adsressof  Array  to pointer 
   
   printf ("elements of 2d array are\n");

   for (i=0; i < N_ROWS ; i++){ 

     	   for (j=0; j < N_COLMNS; j++){
   
	      printf ("%d \t", * ( (p +  (i*N_COLMNS ) ) + j));
      }
      printf ("\n");
   }
}
