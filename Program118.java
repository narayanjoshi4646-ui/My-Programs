// program on digit

import java.util.Scanner;

class Program118
{
    public static void main(String A[])
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

    }
}