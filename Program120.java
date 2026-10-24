// program on digit

import java.util.Scanner;

class Digit
{
    public void DisplayDigits()
    {
         int ino = 175902;

        system.out.println("Number is : " +ino);   // 175902

        system.out.println(ino % 10);  // 2
        ino = ino /10;                 // 17590
        system.out.println("Number is : " +ino);   // 17590


        system.out.println(ino % 10);  // 0
        ino = ino /10                   // 1759
        system.out.println("Number is : " +ino);   // 1759


        system.out.println(ino % 10);  // 9
        ino = ino /10                   //175
        system.out.println("Number is : " +ino);   // 175


        system.out.println(ino % 10);  // 5
        ino = ino /10                  // 17
        system.out.println("Number is : " +ino);   // 17

         system.out.println(ino % 10);  // 7
        ino = ino /10                  // 1
        system.out.println("Number is : " +ino);   // 1

        system.out.println(ino % 10);  // 1
        ino = ino /10                  // 0
        system.out.println("Number is : " +ino);   // 0
    }
}

class Program120
{
    public static void main(String A[])
    {
       Digit digit = new Digit();
       digit.DisplayDigits();
    }
}