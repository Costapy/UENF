package com.mycompany.compilador3;

import java.io.FileInputStream;
/**
 *
 * @author Gabriel
 */
public class Compilador3 {

    public static void main(String[] args) {
        try {
            FileInputStream file = new FileInputStream("C:/Users/Gabriel/Desktop/Costa/Estudos/Uenf/Compiladores/Compilador3/exemplo.txt");
            Token t;
            
            Scanner l = new Scanner(file);
            while((t = l.lex()) != null) {
                if (t.getType() == TokenType.IDENT)
                    System.out.println("IDENTIFICADOR" + "  Value= " + t.getValue());
                else if (t.getType() == TokenType.INTCONST)
                    System.out.println("CONSTANTE INTEIRA" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.MENOR)
                    System.out.println("MENOR" + "  Value= " + t.getValue()); 
                else if (t.getType() == TokenType.MENORIGUAL)
                    System.out.println("MENORIGUAL" + "  Value= " + t.getValue());
                else if (t.getType() == TokenType.MAIOR)
                    System.out.println("MAIOR" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.MAIORIGUAL)
                    System.out.println("MAIORIGUAL" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.PARABERTO)
                    System.out.println("PARABERTO" + "  Value= " + t.getValue());
                else if (t.getType() == TokenType.PARFECHADO)
                    System.out.println("PARFECHADO" + "  Value= " + t.getValue());
                else if (t.getType() == TokenType.TIPO)
                    System.out.println("TIPO" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.IGUAL)
                    System.out.println("IGUAL" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.ATRIBUIR)
                    System.out.println("ATRIBUIR" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.DIFERENTE)
                    System.out.println("DIFERENTE" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.SOMAR)
                    System.out.println("SOMAR" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.SUBTRAIR)
                    System.out.println("SUBTRAIR" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.MULTIPLICAR)
                    System.out.println("MULTIPLICAR" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.DIVIDIR)
                    System.out.println("DIVIDIR" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.CHAVEABERTA)
                    System.out.println("CHAVEABERTA" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.CHAVEFECHADA)
                    System.out.println("CHAVEFECHADA" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.COLCHETEABERTO)
                    System.out.println("COLCHETEABERTO" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.COLCHETEFECHADO)
                    System.out.println("COLCHETEABERTO" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.WHILE)
                    System.out.println("WHILE" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.IF)
                    System.out.println("IF" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.ELSE)
                    System.out.println("ELSE" + " Value= " + t.getValue());
                else if (t.getType() == TokenType.RETURN)
                    System.out.println("RETURN" + " Value=RETURN " + t.getValue());
                else if (t.getType() == TokenType.PONTOVIRG) {
                    System.out.println("PONTOVIRGULA" + " Value=" + t.getValue());
                    break;
                }
            }
        }
        
        catch (Exception e){
            System.out.println("Erro abrindo o arquivo");
        }
    }
}
