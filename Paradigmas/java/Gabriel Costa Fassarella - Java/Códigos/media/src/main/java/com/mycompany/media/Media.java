/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2023
 * Arquivo: Media  
 * Assunto: Exercício 5, Média de 5 provas.
 */

/**
 *
 * @author Gabriel Costa Fassarella (20211100046@pq.uenf.br)
 */


package com.mycompany.media;

import java.util.Scanner;

class calculo_media {
    public static float media(float p1, float p2, float p3, float p4, float p5) {
        return((p1+p2+p3+p4+p5)/5);
    }
}

public class Media {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
  
        System.out.println("Gabriel Costa Fassarella - UENF");
        
        System.out.print("Primeira nota: ");
        float a = scanner.nextFloat();
        
        System.out.print("Segunda nota: ");
        float b = scanner.nextFloat();
        
        System.out.print("Terceira nota: ");
        float c = scanner.nextFloat();
        
        System.out.print("Quarta nota: ");
        float d = scanner.nextFloat();
        
        System.out.print("Quinta nota: ");
        float e = scanner.nextFloat();
        
        float med = calculo_media.media(a, b, c, d, e);
        System.out.println("Média do aluno = " + med);
        
        if(med >= 6) {
            System.out.println("Aprovado!");
        }
        
        else{
            System.out.println("Reprovado.");
        }
    }
}
