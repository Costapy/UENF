/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.compilador3;

/**
 *
 * @author Gabriel
 */
public class parser {
    boolean error;
    Token next;
    Scanner scanner;
            
    public void Parser(Scanner scanner) {
        this.scanner = scanner;
        next = scanner.lex();
    }
            
    public void accept(TokenType expected) {
        if(next.getType() == expected) {
            next = scanner.lex();
        }
        else {
            error("Simbolo errado. Esperado: " + expected + ", Encontrado: " + next.getType());
        }
    }
    
    public void error(String message) {
        System.out.println("Erro de análise sintática: " + message);
        error = true;
    }
    
    public void programa(){
        declaracoes();
        if (next != null && next.getType() != TokenType.PONTOVIRG) {
            error("Tokens restantes após a análise.");
        }
    }
    
    
    
    public void tipo() {
        switch(next.getType()) {
            case TIPO:
                accept(TokenType.TIPO);
        }
    }
    
    public void opMult() {
        switch(next.getType()) {
            case MULTIPLICAR:
                accept(TokenType.MULTIPLICAR);
                break;
            case DIVIDIR:
                accept(TokenType.DIVIDIR);
                break;
        }
    }

    public void opAditiv() {
        switch(next.getType()) {
            case SOMAR:
                accept(TokenType.SOMAR);
                break;
            case SUBTRAIR:
                accept(TokenType.SUBTRAIR);
                break;
        }
    }
    
    public void opRelacional() {
        switch (next.getType()) {
            case MENOR:          
                accept(TokenType.MENOR);
                break;
            case MAIOR:
                accept(TokenType.MAIOR);
                break;
            case MAIORIGUAL:
                accept(TokenType.MAIORIGUAL);
                break;
            case MENORIGUAL:
                accept(TokenType.MENORIGUAL);
                break;
            case IGUAL:
                accept(TokenType.IGUAL);
                break;
            case DIFERENTE:
                accept(TokenType.DIFERENTE);
                break;
            case ATRIBUIR:
                accept(TokenType.ATRIBUIR);
                break;
            default:
                throw new IllegalArgumentException("Tipo de token inesperado: " + next.getType());
        }
    }
}
