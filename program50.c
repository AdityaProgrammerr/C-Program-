// Accept number of user and return summation of digits

#include<stdio.h>
void SumDigit(int iNo)
{
  int iDigit = 0;
  int iSum = 0;
  if(iNo < 0)
   {
     iNo = -iNo;
   }

  while(iNo > 0)
  {
     iDigit = iNo % 10;
     iSum = iSum + iDigit;
     iNo = iNo / 10;
  }
}

int main()
