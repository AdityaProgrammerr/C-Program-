//Accept number of user count number of digits


#include<stdio.h>

int CountDigits(int iNo)
{
  int iDigit = 0;
  int iCnt = 0;
  if(iNo < 0)
  {
     iNo = -iNo;
  }
   while(iNo > 0)
  {
    iCnt++;
    iNo = iNo/10;
  }
  return iCnt;
}
  