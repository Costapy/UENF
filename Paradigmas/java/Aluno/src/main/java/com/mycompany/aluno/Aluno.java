/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.aluno;
import java.util.Scanner;

class AlunoAtrib {
    String nome;
    int matricula;
    String curso;
}
        
class Aluno {
    
    public static AlunoAtrib cria_aluno1() {
        AlunoAtrib Matheus = new AlunoAtrib();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o nome: ");
        Matheus.nome = scanner.nextLine();

        System.out.print("Digite a matrícula: ");
        Matheus.matricula = scanner.nextInt();
        scanner.nextLine();

        System.out.print("Digite o curso: ");
        Matheus.curso = scanner.nextLine();

        return Matheus;
    }
    
    public static void main(String[] args) {
        
        AlunoAtrib gabriel = new AlunoAtrib();
        AlunoAtrib enzo = new AlunoAtrib();
        AlunoAtrib matheus = new AlunoAtrib();
        
        gabriel.nome = "Gabriel Costa Fassarella";
        gabriel.matricula = 202100046;
        gabriel.curso = "Ciências da Computação";
        
        enzo.nome = "Enzo Marques Souza";
        enzo.matricula = 202100085;
        enzo.curso = "Ciências Sociais";
        
        System.out.println("Aluno 1: " + gabriel.nome + " - " + gabriel.matricula + " - " + gabriel.curso);
        System.out.println("Aluno 2: " + enzo.nome + " - " + enzo.matricula + " - " + enzo.curso);
        
        matheus = cria_aluno1();
        System.out.println("Aluno 3: " + matheus.nome + " - " + matheus.matricula + " - " + matheus.curso);
    }
}

