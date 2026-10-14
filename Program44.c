#include<stdio.h>
#include<stdlib.h>

float Average (int iNo1, int iNO2)
{

    float fAns= 0.0f;

    fResult  =(iNo+ iNo2)/2;
    return fAns;
}

int main()
{

     int iValue1 = 0, iValue2 = 0;
     float fResult = 0.0f;

     printf("Enter first number :\n");
     scanf("%d",iValue1);

     printf("Enter second  number :\n");
     scanf("%d",iValue2);

     fResult =Average (iValue1+ iValue2);
             
     printf(" Average : %f\n",fResult);


    return EXIT_SUCCESS;

}