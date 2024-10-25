/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2023
 * Arquivo: Operacoes  
 * Assunto: Exercício 4, operações aritméticas.
 */

/**
 *
 * @author Gabriel Costa Fassarella (20211100046@pq.uenf.br)
 */

package com.mycompany.operacoes;

import java.util.Scanner;

class Calculadora {
   public static int soma(int x, int y) {
       return x + y;
   } 
   
   public static int sub(int x, int y) {
       return x - y;
   } 
      
   public static int mult(int x, int y) {
       return x * y;
   } 
   
   public static String div(int x, int y) {
       if (y != 0) {
           float div = (float) x / y;
           return "Divisão = " + div;
       } else {
           return "O divisor deve ser diferente de 0!";  
       }
   }
}

public class Operacoes {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
  
        System.out.println("Gabriel Costa Fassarella - UENF");
        
        System.out.print("Primeiro Número: ");
        int num1 = scanner.nextInt();
        
        System.out.print("Segundo Número: ");
        int num2 = scanner.nextInt();
        
        int soma = Calculadora.soma(num1, num2);
        int subtracao = Calculadora.sub(num1, num2);
        int multiplicacao = Calculadora.mult(num1, num2);
        String divisao = Calculadora.div(num1, num2);
        
        System.out.println("Soma: " + soma);
        System.out.println("Subtração: " + subtracao);
        System.out.println("Multiplicação: " + multiplicacao);
        System.out.println(divisao);
    }
}
