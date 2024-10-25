/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2023
    * Arquivo: Equacao
 * Assunto: Exercício 8, equação segundo grau.
 */

/**
 *
 * @author Gabriel Costa Fassarella (20211100046@pq.uenf.br)
 */

package com.mycompany.equacao;

import java.util.Scanner;

class QuadraticEquation {
    private int a;
    private int b;
    private int c;

    public QuadraticEquation() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Digite o valor de a: ");
        a = scanner.nextInt();
        System.out.print("Digite o valor de b: ");
        b = scanner.nextInt();
        System.out.print("Digite o valor de c: ");
        c = scanner.nextInt();
    }

    public int getA() {
        return a;
    }

    public int getB() {
        return b;
    }

    public int getC() {
        return c;
    }
    
    public int getDiscriminant() {
        return(b*b - (4*a*c));
    }
    
    public double getRoot1(int delta) {
        if(delta >= 0) {
            return((-b + Math.sqrt((delta)))/2*a);
        }
        
        else {
            return(0);
        }
    }
    
    public double getRoot2(int delta) {
    if(delta >= 0) {
        return((-b - Math.sqrt((delta)))/2*a);
    }

    else {
        return(0);
    }
}
}

public class Equacao {
    public static void main(String[] args) {           
        QuadraticEquation equacao = new QuadraticEquation();

        int a = equacao.getA();
        int b = equacao.getB();
        int c = equacao.getC();
        System.out.println("Equação: " + a + "x² +" + b + "x + " + c + " = 0");
        
        int delta = equacao.getDiscriminant();
        System.out.println("Delta: " + delta);
        
        double r1 = equacao.getRoot1(delta);
        double r2 = equacao.getRoot2(delta);
        
        System.out.println("R1: " + r1 + " R2: " + r2);
        
    }
}
