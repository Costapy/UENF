/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2023
    * Arquivo: Computador
 * Assunto: Exercício 7, Computador.
 */

/**
 *
 * @author Gabriel Costa Fassarella (20211100046@pq.uenf.br)
 */

package com.mycompany.computador;

import java.util.Scanner;

class computadorC {
    private String modelo;
    private String marca;
    
    public computadorC() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Modelo: ");
        modelo = scanner.nextLine();
        System.out.print("Marca: ");
        marca = scanner.nextLine();
    }
    
    public String getModelo() {
        return modelo;
    }

    public String getMarca() {
        return marca;
    }
    
    public void ligar() {
        System.out.println("Ligando o computador...");
    }
    
    public void desligar() {
        System.out.println("Desligando o computador...");
    }
}

class desktop extends computadorC {
    private String modelo_teclado;
    private String modelo_monitor;
    
    public desktop() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Modelo do Teclado: ");
        modelo_teclado = scanner.nextLine();
        scanner.nextLine();
        System.out.print("Modelo do Monitor: ");
        modelo_monitor = scanner.nextLine();
    }
    
    public String getTec() {
        return modelo_teclado;
    }

    public String getMon() {
        return modelo_monitor;
    }
    
    public void pesquisar() {
        System.out.println("Realizando uma pesquisa...");
    }
    
    public void reiniciar() {
        System.out.println("Reiniciando computador...");
    }
}

class notebook extends desktop {
    private float tamanho_da_tela;
    private int bateria;
    
    public notebook() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Tamanho da Tela: ");
        tamanho_da_tela = scanner.nextFloat();
        scanner.nextLine();
        System.out.print("Bateria: ");
        bateria = scanner.nextInt();
    }
    
    public float getTela() {
        return tamanho_da_tela;
    }

    public int getBat() {
        return bateria;
    }
    
    public void abrir() {
        System.out.println("Abrindo notebook...");
    }
    
    public void carregar_bateria() {
        System.out.println("Carregando a batéria...");
    }
}


public class Computador {
    public static void main(String[] args) {
        notebook pc = new notebook();
        
        pc.carregar_bateria();
    }
}