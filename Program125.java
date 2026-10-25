// program on digit

import java.util.Scanner;

class Digit
{
    public void DisplayDigits(int ino)
    {
    int iDigit = 0;
        if(ino < 0)
        {
            ino = -ino;
        }
        while(ino ! = 0)
        {
            iDigit = ino % 10;
            ino = ino /10;                 
            system.out.println(iDigit); 
        }
    }
}

class Program125
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
       Digit digit = new Digit();

       system.out.println("Enter number :");
       int iValue = scanner.nextint();
       
       digit.DisplayDigits(iValue);
    }
}