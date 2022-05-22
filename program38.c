#include<stdio.h>
#include<stdbool.h>

void DisplayF(int iNo)
{
  int iCnt = 0;                       // Upword direction
  
  for(iCnt = 1; iCnt<= iNo; iCnt++)
  {
     printf("%d\n",iCnt);
  }
}
 
void DisplayB(int iNo)
{
  int iCnt = 0;
                                            //Downword direction
  for(iCnt = iNo; iCnt >= 1; iCnt--)         // Backword Direction
  {
     printf("%d\n",iCnt);
  }
}

int main()
{

  int iValue = 0;
  
  printf("Enter number\n");
  scanf("%d",&iValue);
  printf("Forword Display\n");
  DisplayF(iValue);
  printf("Downword Display\n");
  DisplayB(iValue);

  return 0;
}
   


