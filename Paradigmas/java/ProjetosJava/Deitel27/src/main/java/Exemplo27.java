/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019
 * Arquivo: 
 * Assunto: 
 */

/**
 *
 * @author Prof. Ausberto S. Castro Vera (ascv@uenf.br)
 */
// Fig. 2.7: Addition.java
// Programa que soma  dois numeros inteiros.
import java.util.Scanner; // programa que usa a classe Scanner

public class Exemplo27 {
    
   // main method begins execution of Java application
   public static void main(String[] args)
   {
      // cria um Scanner para obter entrada a partir da janela de comandos
      Scanner input = new Scanner(System.in);

      int number1; // primeiro numero a somar
      int number2; // segundo numero a somar
      int sum; // soma de  number1 e number2

      System.out.print("Ingresse o PRIMEIRO numero inteiro: "); // prompt 
      number1 = input.nextInt(); // Lê o primeiro numero

      System.out.print("Ingresse o SEGUNDO numero inteiro: "); // prompt 
      number2 = input.nextInt(); // Lê o segundo numero

      sum = number1 + number2; // soma os dois numeros

      System.out.printf("A soma = %d%n", sum); // display sum
      } // fim do METODO main
}// fim da classe Exemplo27 (soma)
