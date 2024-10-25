/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2023
 * Arquivo:  
 * Assunto: 
 */

/**
 *
 * @author Prof. Ausberto S. Castro Vera (ascv@uenf.br)
 */

// Fig. 3.9: ContaBancaria.java
// Entradas e saídas de valores com objetos Conta.
import java.util.Scanner;

public class ContaBancaria {
    
   public static void main(String[] args) 
   {
      Conta conta1 = new Conta("Maria Lopes", 50.00);          // objeto1
      Conta conta2 = new Conta("Rodrigo Mendes", -7.53);       // objeto2

      // display initial saldo of each object
      System.out.printf("%s saldo: $%.2f%n",
         conta1.getNome(), conta1.getSaldo()); 
      System.out.printf("%s saldo: $%.2f%n%n",
         conta2.getNome(), conta2.getSaldo()); 

      // create a Scanner to obtain input from the command window
      Scanner input = new Scanner(System.in);

      System.out.print("Ingresse a quantidade de deposito para a conta 1: "); // prompt
      double depositoQuantidade = input.nextDouble(); // obtain user input
      System.out.printf("%nAdicionando %.2f para o saldo da conta 1%n%n", 
         depositoQuantidade);
      conta1.deposito(depositoQuantidade); // add to conta1's saldo

      // display saldos
      System.out.printf("%s saldo: $%.2f%n",
         conta1.getNome(), conta1.getSaldo()); 
      System.out.printf("%s saldo: $%.2f%n%n",
         conta2.getNome(), conta2.getSaldo()); 

      System.out.print("Ingresse a quantidade de deposito para a conta 2: "); // prompt
      depositoQuantidade = input.nextDouble(); // obtain user input
      System.out.printf("%nAdicionando %.2f ao saldo da conta 2%n%n", 
         depositoQuantidade);
      conta2.deposito(depositoQuantidade); // add to conta2 saldo

      // display saldos
      System.out.printf("%s saldo: $%.2f%n", 
         conta1.getNome(), conta1.getSaldo()); 
      System.out.printf("%s saldo: $%.2f%n%n",
         conta2.getNome(), conta2.getSaldo()); 
   } // fim do método main
} // fim da classe ContaBancaria

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
