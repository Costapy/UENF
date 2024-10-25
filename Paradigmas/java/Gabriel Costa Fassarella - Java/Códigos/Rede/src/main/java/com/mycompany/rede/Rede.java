/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2023
    * Arquivo: Rede
 * Assunto: Exercício 7, Rede.
 */

/**
 *
 * @author Gabriel Costa Fassarella (20211100046@pq.uenf.br)
 */

package com.mycompany.rede;

import java.util.Scanner;

class RedeC {
    private String nome;
    private int veloc;
    
    public RedeC() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Nome: ");
        nome = scanner.nextLine();
        System.out.print("Marca: ");
        veloc = scanner.nextInt();
    }
    
    public String getModelo() {
        return nome;
    }

    public int getMarca() {
        return veloc;
    }
    
    public void conectar_dispositivos() {
        System.out.println("Conectando os dispositivos desejados...");
    }
    
    public void compartilhar_dados() {
        System.out.println("Compartilhando dados entre os dispositivos...");
    }
}

class rede_local extends rede {
    private String ip;
    private String nome_do_dispositivo;
    
    public rede_local() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Ip: ");
        ip = scanner.nextLine();
        scanner.nextLine();
        System.out.print("Nome do Dispositivo: ");
        nome_do_dispositivo = scanner.nextLine();
    }
    
    public String getIp() {
        return ip;
    }

    public String getName() {
        return nome_do_dispositivo;
    }
    
    public void cadastrar() {
        System.out.println("Cadastrando " + nome_do_dispositivo + " a rede...");
    }
    
    public void monitorar() {
        System.out.println("A rede está segura!");
    }
}

class rede_sem_fio extends rede_local {
    private int quantia_de_dispositivos;
    private String status;
    
    public rede_sem_fio() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Quantia de Dispositivos: ");
        quantia_de_dispositivos= scanner.nextInt();
        scanner.nextLine();
        System.out.print("Status: ");
        status = scanner.nextLine();
    }
    
    public int getQuant() {
        return quantia_de_dispositivos;
    }

    public String getSt() {
        return status;
    }
    
    public void configurar() {
        System.out.println("Configurando privacidade da rede...");
    }
    
    public void verif_coneccao() {
        System.out.println("Conecção OK...");
    }
}


public class Rede {
    public static void main(String[] args) {
        rede_sem_fio rede1 = new rede_sem_fio();
        
        rede1.verif_coneccao();
    }
}