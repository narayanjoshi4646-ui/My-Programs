// program on digit

import java.util.Scanner;

class Digit
{
    public void DisplayDigits()
    {
     int ino = 175902;

        while(ino ! = 0)
        {
            system.out.println("Digit is :"+(ino % 10));  
            ino = ino /10;                 
            system.out.println("Number is : " +ino); 
        }
    }
}

class Program121
{
    public static void main(String A[])
    {
       Digit digit = new Digit();
       digit.DisplayDigits();
    }
}