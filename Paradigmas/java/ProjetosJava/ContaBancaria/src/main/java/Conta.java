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

// Fig. 3.8: Conta.java
// classe Conta  commuma variável de instância saldo do tipo double e um
// construtor e método deposito que  executa a validação

public class Conta {   
   private String nome; // variável de instância 
   private double saldo; // variável de instância 

   // construtor de Conta, que recebe dois parametros  
   public Conta(String nome, double saldo) 
   {
      this.nome = nome; // atribui nome à variável de instância nome

      // validate that the saldo is greater than 0.0; if it's not,
      // instance variable saldo keeps its default initial value of 0.0
      if (saldo > 0.0) // if the saldo is valid
         this.saldo = saldo; // assign it to instance variable saldo
   }

   // metodo que deposita (adiciona) apenas uma quantiavalida no saldo
   public void deposito(double depositoQuantidade) 
   {      
      if (depositoQuantidade > 0.0) // se depositoQuantidade for válido
         saldo = saldo + depositoQuantidade; // o adiciona ao saldo 
   }

   // método que retorna o saldo da conta
   public double getSaldo()
   {
      return saldo; 
   } 

   // método que define o nome
   public void setNome(String nome)
   {
      this.nome = nome; 
   } 

   // método que retorno o nome
   public String getNome()
   {
      return nome; 
   } 
} // fim da classe Conta

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
