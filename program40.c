#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
   int iCnt = 0;
   int iFactCnt = 0;
  
   for(iCnt = 1; iCnt <= iNo/2; iCnt++)
   {
     if(iNo % iCnt == 0)
     {
       iFactCnt++;
     }
   }
     return iFactCnt;
}

int main()
{

   int iValue = 0;
   bool iRet;

   printf("Enter number\n");
   scanf("%d",&iValue);

   iRet = CountFactor(iValue);

   if(iRet == true)

   {
      printf("%d is prime number\n",iValue);
   }
   else
   {
      printf("%d is not a prime number\n",iValue);
   }

   return 0;
}
