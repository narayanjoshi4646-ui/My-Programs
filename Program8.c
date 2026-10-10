/*
 step 1 : understand the problem ststement 
 step 2 : write the algritham
 step 3: decide the program language
 step 4 : write the program
 step 5 : test the program
*/

////////////////////////////////////////
//
//  step 1: understand the problem ststement
//          user is going to enter any 2 intgar
             and we have to perform addition

////////////////////////////////////////

//  step 2 : write the algritham
/*
  start 
        acepect first no as No1
        acepect first no as No2
        create the variable as Ans to store the result
        perform the additon and store into Ans 
        display thr result from Ans

    end
*/             

////////////////////////////////////////
//
//      step 3: decide the program language
//              we select c programming
///////////////////////////////////////////
//
//       step 4 : write the program
//

////////////////////////////////////

#include<stdio.h>


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

int Addition(int iNo1, int iNo2)
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


    return 0;

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