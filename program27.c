
#include<stdio.h> 

void JwelersPortal(int iWeight)
{
     switch(iWeight)
     {
       case 1:
          printf("Your bil amount is 4000\n");
          break;
        
       case 2:
          printf("Your bil amount is 8000\n");
          break;
       
       case 5:
          printf("Your bil amount is 20000\n");
          break;
   
        case 10:
          printf("Your bil amount is 40000 \n");
          break;
  
         defoult:
           printf("Invalid weight\n");
      }
}

int main()
{

   int iValue = 0;

   printf("Enter the gold coin size that you want to purchse\n");
   scanf("%d",&iValue);

   JwelersPortal(iValue);

   return 0;
}