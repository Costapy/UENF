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
package com.mycompany.docente;

import java.util.Scanner;

class pessoa {
    private String nome;
    private int matricula;
    
    public pessoa() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Nome: ");
        nome = scanner.nextLine();
        System.out.print("Matrícula: ");
        matricula = scanner.nextInt();
    }
    
    public String getName() {
        return nome;
    }

    public int getM() {
        return matricula;
    }
    
    public void andar() {
        System.out.println(nome + " anda pela universidade...");
    }
    
    public void comer() {
        System.out.println(nome + " almoça no ru...");
    }
}

class funcionario extends pessoa {
    private float salario;
    private String centro;
    
    public funcionario() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Salário: ");
        salario = scanner.nextFloat();
        scanner.nextLine();
        System.out.print("Centro: ");
        centro = scanner.nextLine();
    }
    
    public Float getSal() {
        return salario;
    }

    public String getC() {
        return centro;
    }
    
    public void trabalhar() {
        System.out.println("O funcionário trabalha no " + centro);
    }
    
    public void obter_salario() {
        System.out.println("O funcionário recebe R$ " + salario);
    }
}

class docenteC extends funcionario {
    private String disciplina;
    private int carga_horaria;
    
    public docenteC() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Carga Horária: ");
        carga_horaria = scanner.nextInt();
        scanner.nextLine();
        System.out.print("Disciplina: ");
        disciplina = scanner.nextLine();
    }
    
    public int getCarga() {
        return carga_horaria;
    }

    public String getDisc() {
        return disciplina;
    }
    
    public void lecionar() {
        System.out.println("O docente leciona a matéria " + disciplina + " por " + carga_horaria);
    }
    
    public void estudar() {
        System.out.println("O docente estuda assuntos sobre a matéria a qual ele leciona");
    }
}


public class Docente {
    public static void main(String[] args) {
        docenteC joao = new docenteC();
        
        joao.lecionar();
    }
}
