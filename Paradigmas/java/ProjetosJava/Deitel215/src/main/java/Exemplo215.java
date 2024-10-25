/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019
 * Arquivo: 
 * Assunto: Comparar 2 numeros
 */

/**
 *
 * @author Prof. Ausberto S. Castro Vera (ascv@uenf.br)
 */

// Fig. 2.15: Comparison.java
// Compare integers using if statements, relational operators 
// and equality operators.
import java.util.Scanner; // program uses class Scanner

public class Exemplo215 {

   // main method begins execution of Java application
   public static void main(String[] args)
   {
      // create Scanner to obtain input from command line
      Scanner input = new Scanner(System.in);

      int number1; // first number to compare
      int number2; // second number to compare

      System.out.print("Ingresse o PRIMEIRO numero inteiro: "); // prompt 
      number1 = input.nextInt(); // Lê o primeiro numero "); // prompt 


      System.out.print("Ingresse o SEGUNDO numero inteiro: "); // prompt 
      number2 = input.nextInt(); // Lê o segundo numero "); // prompt 
 
      
      if (number1 == number2) 
         System.out.printf("%d == %d%n", number1, number2);

      if (number1 != number2)
         System.out.printf("%d != %d%n", number1, number2);

      if (number1 < number2)
         System.out.printf("%d < %d%n", number1, number2);

      if (number1 > number2)
         System.out.printf("%d > %d%n", number1, number2);

      if (number1 <= number2)
         System.out.printf("%d <= %d%n", number1, number2);

      if (number1 >= number2)
         System.out.printf("%d >= %d%n", number1, number2);
   } // end method main
} // end class Comparison

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

