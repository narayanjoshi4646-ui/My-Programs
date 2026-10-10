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

int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0 ;

    printf(" Enter First Number :\n");
    scanf("%d",&iValue1);

    printf(" Enter Second Number :\n");
    scanf("%d",&iValue2);
    


  iResult  = iValue1 + iValue2 ;                                  // Business Logic

    printf(" Addition is : %d\n",iResult);

    return 0;

}
