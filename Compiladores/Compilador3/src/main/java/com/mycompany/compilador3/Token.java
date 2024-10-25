package com.mycompany.compilador3;

/**
 *
 * @author Gabriel
 */
public class Token {
    TokenType type;
    String value;
    
    public Token(TokenType t, String v) {
        this.type = t;
        this.value = v;
    }
    
    public TokenType getType() {
        return type;
    }
    
    public String getValue() {
        return value;
    }
}
