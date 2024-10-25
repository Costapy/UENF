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

package com.mycompany.linear;

import java.util.Scanner;

class LinearEquation {
    private int a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    

    public LinearEquation() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Digite o valor de a: ");
        a = scanner.nextInt();
        System.out.print("Digite o valor de b: ");
        b = scanner.nextInt();
        System.out.print("Digite o valor de c: ");
        c = scanner.nextInt();
        System.out.print("Digite o valor de d: ");
        d = scanner.nextInt();
        System.out.print("Digite o valor de e: ");
        e = scanner.nextInt();
        System.out.print("Digite o valor de f: ");
        f = scanner.nextInt();
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
    
    public int getD() {
        return d;
    }
    
    public int getE() {
        return e;
    }
    
    public int getF() {
        return f;
    }
    
    public boolean isSolvable() {
        int op = (a * d) - (b * c);
        return op != 0;
    }
    
    
    public float getX() {
        return((e*d - b*f)/(a*d - b*c));
    }
    
    public float getY() {
        return((a*f - e*c)/(a*d - b*c));
    }
}

public class Linear {
    public static void main(String[] args) {           
        LinearEquation equacao = new LinearEquation();

        int a = equacao.getA();
        int b = equacao.getB();
        int c = equacao.getC();
        int d = equacao.getD();
        int e = equacao.getE();
        int f = equacao.getF();
        System.out.println(a + "x + " + b + "y = " + e);
        System.out.println(c + "x + " + d + "y = " + f);
        
        boolean sol = equacao.isSolvable();
        if(sol == true) {
            System.out.println("Solucionável...");
            
            float X = equacao.getX();
            System.out.println("X = " + X);
            
            float Y = equacao.getY();
            System.out.println("Y = " + Y);
        }
        
        else {
            System.out.println("Não é possível solucionar...");
        }
    }
}
