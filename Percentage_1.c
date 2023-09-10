#include<stdio.h>

int main()
{



int ravismarkeng=50;
int englishpassmark=45;

int ravismarkmath=48;
int mathpassmark=45;

int ravismarksec=50;
int secpassmark=45;

int passmark=(englishpassmark+mathpassmark+secpassmark)/3;
int percentage=((ravismarkeng+ravismarkmath+ravismarksec) * 100 / 300);

if(ravismarkeng>=englishpassmark)
{
	printf("English:Pass\n");
}
else {
	printf("English:Fail\n");
}
if (ravismarkmath>=mathpassmark)
{
printf("Math:Pass\n");
}
else {
printf("Math:Fail\n");
}


if(ravismarksec>=secpassmark)
{
printf("Science:Pass\n");
}

else      
{
printf("Science:Fail\n");
}

if( (englishpassmark >= passmark) && ( mathpassmark >= passmark) && ( secpassmark >= passmark) )
{
printf("Overall Result:Pass");
}
else
{
printf("Overall Result:Fail");
}

printf(" \n \t Percentage %d  per  \n",percentage);
return 0;
}
