package com.mycompany.compilador3;

import java.io.InputStream;
import java.io.IOException;

/**
 *
 * @author Gabriel
 */
public class Scanner {
    InputStream in;
    boolean back;
    char currentChar;
    boolean error;
    StringBuffer tokenString;
    
    public Scanner(InputStream i){
        this.in = i;
        back = false;
    }
    
    private boolean nextChar() throws IOException {
        if(!back) {
            currentChar = (char) in.read();
        }
        tokenString.append(currentChar);
        back = false;
        return true;       
    }
    
    public void cleartokenString(){
            tokenString.deleteCharAt(tokenString.length() - 1);
    }
    
    public void setBack(){
            back = true;
            cleartokenString(); 
    }
    
    public Token lex() {
        int state;
        
        tokenString = new StringBuffer();
        error = false;
        state = 0;
        
        try {
            while(!error) {
                switch(state){
                    case 0: nextChar();
                        if (Character.isLetter(currentChar))
                            state = 1;
                        else if (Character.isDigit(currentChar))
                            state = 3;
                        else if (currentChar == '<')
                            state = 5;
                        else if (currentChar == '>')
                            state = 8;
                        else if (currentChar == '=')
                            state = 11;
                        else if (currentChar == '!')
                            state = 14;
                        else if (currentChar == '+')
                            return new Token(TokenType.SOMAR, tokenString.toString());
                        else if (currentChar == '-')
                            return new Token(TokenType.SUBTRAIR, tokenString.toString());
                        else if (currentChar == '*')
                            return new Token(TokenType.MULTIPLICAR, tokenString.toString());
                        else if (currentChar == '/')
                            return new Token(TokenType.DIVIDIR, tokenString.toString());
                        else if (currentChar == '(')
                            return new Token(TokenType.PARABERTO, tokenString.toString());
                        else if (currentChar == '{')
                            return new Token(TokenType.CHAVEABERTA, tokenString.toString());
                        else if (currentChar == '}')
                            return new Token(TokenType.CHAVEFECHADA, tokenString.toString());
                        else if (currentChar == '[')
                            return new Token(TokenType.COLCHETEABERTO, tokenString.toString());
                        else if (currentChar == ']')
                            return new Token(TokenType.COLCHETEFECHADO, tokenString.toString());
                        else if (currentChar == ')')
                            return new Token(TokenType.PARFECHADO, tokenString.toString());
                        else if (currentChar == ' ' ||
                                currentChar == '\n' ||
                                currentChar == '\t' ||
                                currentChar == '\r')
                            cleartokenString();
                        else 
                            if(currentChar == ';')
                                return new Token(TokenType.PONTOVIRG, tokenString.toString());
                            else
                                error = true;
                            break;
                    case 1:
                        nextChar();
                        if(!Character.isLetterOrDigit(currentChar))
                            state = 2;
                        break;
                    case 2: setBack();
                        String value = tokenString.toString();
                        if(value.equals("int") || value.equals("void")) {
                            return new Token(TokenType.TIPO, value);
                        } 
                        else if(value.equals("while")) {
                            return new Token(TokenType.WHILE, value);
                        } 
                        else if(value.equals("if")) {
                            return new Token(TokenType.IF, value);
                        } 
                        else if(value.equals("else")) {
                            return new Token(TokenType.ELSE, value);
                        } 
                        else if(value.equals("return")) {
                            return new Token(TokenType.RETURN, value);
                        } 
                        else {
                            return new Token(TokenType.IDENT, tokenString.toString());
                        }
                    case 3: nextChar();
                        if(!Character.isDigit(currentChar))
                            state = 4;
                        break;
                    case 4: setBack();
                        return new Token(TokenType.INTCONST, tokenString.toString());
                    case 5: nextChar();
                        if(currentChar == '=')
                            state = 6;
                        else state = 7;
                        break;
                    case 6: return new Token(TokenType.MENORIGUAL, tokenString.toString());
                    case 7: return new Token(TokenType.MENOR, tokenString.toString());
                    case 8: nextChar();
                        if(currentChar == '=')
                            state = 9;
                        else state = 10;
                        break;
                    case 9: return new Token(TokenType.MAIORIGUAL, tokenString.toString());
                    case 10: setBack();
                        return new Token(TokenType.MAIOR, tokenString.toString());
                    case 11:
                        nextChar();
                        if (currentChar == '=') {
                            state = 13; 
                        } else {
                            state = 12; 
                        }
                        break;
                    case 12: 
                        setBack();
                        return new Token(TokenType.ATRIBUIR, tokenString.toString()); 
                    case 13:
                        return new Token(TokenType.IGUAL, tokenString.toString());  
                    case 14:
                        nextChar();  
                        if(currentChar == '=') {
                            return new Token(TokenType.DIFERENTE, tokenString.toString());
                        }
                        break;
                    default: error = true;
                        
                }
            }
            return null;
        }
        catch(IOException e) {
            return null;
        }
    }
}
