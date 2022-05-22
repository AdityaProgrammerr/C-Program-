#include<stdio.h>


void Display(int iNO)
{
     int iCnt = 0;
     if(iNO <0)
     {
     
      iNO = -iNO;
      
     }
      

      /*
      for(iCnt = 1; iCnt <= iNO; iCnt++)
      {
        printf("%d\n",iCnt);
       
       } 
        */
         
        iCnt = 1;
    
       while(iCnt <= iNO)
       {
     
           printf("%d\n",iCnt);
           iCnt++;
       }
}


int main()
{
  int iValue = 0;
   
   printf("Enter the number\n");
   scanf("%d",&iValue);
  
     Display(iValue);
 
    return 0;
}