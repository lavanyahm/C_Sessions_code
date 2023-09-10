#include<stdio.h>

/*Demo functions basic
 */

/*Declre function Max*/
int Maxof(int,int);


int main()
{
   
//Decalre x and y	
int x= 10, y=20;

//Call Function maxof by passing a and b 
//store vaue in z 
int z = Maxof(x,y);

//Print the value of Max
printf("\n Max of %d and %d = %d \n", x, y,z);

return 0;


}

/**************
 * Function name : Maxof
 *input : integer a and integer b
 *return type: interger
 * return value : Mar of a and b
 * */
int Maxof(int a, int b)
{

return (a > b? a : b);

}

