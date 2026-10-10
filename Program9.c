#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////
//
// Funtion Name  :  Addition
// Input         :  Integer,Intrger
// Output        :   Intrger
// Description   :  Perform Addirion 
// Date          :   04/10/2026
// Author        : Narayan Krushna Joshi
//
////////////////////////////////////

int Addition(
              int iNo1,                                          // First input
              int iNo2                                           // Second input
            )
{
  int iAns = 0;

  iAns = iNo1+iNo2;                                               // Business Logic
////////////////////////////////////
//
// Entry point of the Application
//

////////////////////////////////////

    return iAns;
}

////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0 ;

    printf(" Enter First Number :\n");
    scanf("%d",&iValue1);

    printf(" Enter Second Number :\n");
    scanf("%d",&iValue2);
    


  iResult  = Addition(iValue1,iValue2);                            

    printf(" Addition is : %d\n",iResult);*


    return EXIT_SUCCESS;

}
////////////////////////////////////////////////////////////////////////////////
// Step5 : test the program
//   Tested test cases 
//------------------------------------
// Input1     input2      output
//------------------------------------
//
// 10         11           21
// 11          0           11
//0           11           11 
//20          -9           11 
//-9           20          11
//-20          -9         -31
////////////////////////////////////////////////////////////////////////////////