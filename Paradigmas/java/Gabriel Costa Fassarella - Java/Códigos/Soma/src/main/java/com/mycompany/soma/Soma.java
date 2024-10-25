/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2023
 * Arquivo: Soma 
 * Assunto: Exercício 6, Soma dos valores de um intervalo.
 */

/**
 *
 * @author Gabriel Costa Fassarella (20211100046@pq.uenf.br)
 */

package com.mycompany.soma;

import java.util.Scanner;

class calculo_soma {
    public static int calc(int a, int b) {
        int Soma = 0;
        while(a <= b) {
            Soma += a;
            a += 1;
        }
        
        return (Soma);
    }
}

public class Soma {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
  
        System.out.println("Gabriel Costa Fassarella - UENF");
        
        System.out.print("Valor para A: ");
        int A = scanner.nextInt();
        
        System.out.print("Valor para B: ");
        int B = scanner.nextInt();
        
        int Soma = calculo_soma.calc(A, B);
        System.out.println("Soma = " + Soma);
    }
}
