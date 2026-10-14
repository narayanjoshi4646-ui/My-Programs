#include<stdio.h>
#include<stdlib.h>

int Minimum (int iNo1, int iNO2)
{
    if(iNo1 < iNo2)
     {
                return iNO1;
     }
     else
     {
                return iNO2;
        
     }

}
int main()
{

     int iValue1 = 0, iValue2 = 0, iValue3 =0;

     printf("Enter first number :\n");
     scanf("%d",iValue1);

     printf("Enter second  number :\n");
     scanf("%d",iValue2);

     iResult =Minimum(iValueNo1+ iValue2);
             
     printf(" Minimum number is : %d\n",iResult);
    return EXIT_SUCCESS;

}