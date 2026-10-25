// program on digit

import java.util.Scanner;

class Digit
{
    public void DisplayDigits()
    {
     int ino = 9752;
    int iDigit = 0;

        while(ino ! = 0)
        {
            iDigit = ino % 10;
            ino = ino /10;                 
            system.out.println(iDigit); 
        }
    }
}

class Program122
{
    public static void main(String A[])
    {
       Digit digit = new Digit();
       
       digit.DisplayDigits();
    }
}