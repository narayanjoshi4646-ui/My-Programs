#include<stdio.h>
#include<stdlib.h>

bool CheckEven(int iNo)
{

     if((iNo % 2) == 0)
     {
            return true;
     }
     else
     {
            return false;

     }
}

int main()
{

     int iValue = 0;
       bool bRet = false;
     printf("Enter Number :\n");
     scanf("%d",& iValue);
       
     bRet =  CheckEven(iValue);
       
     if(bRet == true)
     {
            printf(" it is Even Number\n");
     }
     else
     {
            printf(" it is Odd Number\n");

     }

    return EXIT_SUCCESS;
}