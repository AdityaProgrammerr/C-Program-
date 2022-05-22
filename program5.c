#include<stdio.h>
int Addition(int,int);
////////////////////////////////////////////////////////
//Write a program to perform addition of 2 numbers
//////////////////////////////////////////////////////

int main()
{
 int iNo1 = 0;
 int iNo2 = 0;
 int iNo3 = 0;

 
 printf("ENter first number\n");
 scanf("%d",&iNo1);
 
   printf("ENter Second number\n");
  scanf("%d",&iNo2);

  iNo3 = Addition(iNo1,iNo2);
  printf("Addition is : %d\n",iNo3);
   
  return 0;
}



















////////////////////////////////////////////
//
// In