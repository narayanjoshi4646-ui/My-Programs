// program on digit

import java.util.Scanner;

class Digit
{
    public void DisplayDigits(int ino)
    {
    int iDigit = 0;

        while(ino ! = 0)
        {
            iDigit = ino % 10;
            ino = ino /10;                 
            system.out.println(iDigit); 
        }
    }
}

class Program124
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
       Digit digit = new Digit();

       system.out.println("Enter number :");
       int iValue = scanner.nextint();
       
       digit.DisplayDigits( iValue);
    }
}