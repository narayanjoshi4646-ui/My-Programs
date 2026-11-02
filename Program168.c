// input 6457  -> 22    5.5
// input 45    -> 9     
// input 734    -> 14

#include<stdio.h>
#include<stdlib.h>

float AvarageDigit( int iNo)
{
     int iDigit = 0;
     int iSum = 0;
     int Count = 0;
     float avg = 0.0f;


     if(iNo < 0)
     {
        iNo = -iNo;
     }

     while(iNo != 0)
     {
        iDigit = (iNo % 10);
        iSum = iSum + iDigit;
        iCount++
        avg(iDigit/iCount);
        iNo = iNo / 10;
     }
     if(iCount !=0)
     {
      avg = (float)Sum / iCount;
     }

     return avg
}



int main()
{
    int iValue = 0;
    float  iRet = 0.0f;

    printf("Enter number :\n");
    scanf("%d",&iValue);

     fRet = AvarageDigit(iValue);

    printf(" Avarage  of digit is  :%d\n",iValue , iRet);

     return EXIT_SUCCESS;
}