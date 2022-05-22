  //Accept two number from user and get powar to A reas to b
  // Input : 2 4
  // Output : 16
  /*
     START
     Accept one number as no1
     Accept another number as no2
  
     Create one variable as Mult
     Set the value 1 in the variable Mult
  
     Create one counter as cnt
     Set the counter to 1
  
     LOOP :
     Itreate till the counter is less than or equal to no2
     mult = Mult * no1
     increment the counter by 1
      Goto Loop
  
     Display the value of mult
     End
  */

#include<stdio.h>

int Power(int iNo1, int iNo2)
{
   
    int iMult = 1;
   int  iCnt = 0;
 
    for(iCnt = 1;iCnt <= iNo2; iCnt++)
    {
       iMult = iMult * iNo1;
    }
     return iMult;
 }
  
    
int main()
{
   auto int iValue1 = 0;
   auto int iValue2 = 0;
   auto int iRet = 0;

   printf("Enter base : \n");
   scanf("%d",&iValue1);

   printf("Enter power : \n");
   scanf("%d",&iValue2);

  iRet = Power(iValue1,iValue2);
  
   printf("Result is : %d\n",iRet);
  
   return 0;
}

     