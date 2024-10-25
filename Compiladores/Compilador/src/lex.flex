/* this is the scanner example from the JLex website 
   (with small modifications to make it more readable) */
%%

%{
  
%} 

%class Scanner
%function lex
%type Token
%line
%char

%full

/* Declarações */
ALPHA = [A-Za-z]
DIGIT = [0-9]
WHITE_SPACE_CHAR = [\n\r\ \t]
IDENT = {ALPHA}({ALPHA}|{DIGIT}|_)*
INTCONST = {DIGIT}+

%%
<YYINITIAL> {
    /* Identificadores e numeros */
    {IDENT}    { return new Token(TokenType.IDENT, yytext()); }
    {INTCONST} { return new Token(TokenType.INTCONST, yytext()); }

    /* Espaços em branco */
    {WHITE_SPACE_CHAR}+ {}

    /* Palavras Chave */
    "int" { return new Token(TokenType.INT, yytext()); }
    "void" { return new Token(TokenType.VOID, yytext()); }
    "while" {  return new Token(TokenType.WHILE, yytext()); }
    "if" { return new Token(TokenType.IF, yytext()); }
    "else" {  return new Token(TokenType.ELSE, yytext()); }
    "return" { return new Token(TokenType.RETURN, yytext());} }

    /* Operadores Relacionais */
    "==" { return new Token(TokenType.IGUAL, yytext()); }
    "!=" { return new Token(TokenType.DIFERENTE, yytext()); }
    "<=" { return new Token(TokenType.MENORIGUAL, yytext()); }
    ">=" { return new Token(TokenType.MAIORIGUAL, yytext()); }
    "<" { return new Token(TokenType.MENOR, yytext()); }
    ">" { return new Token(TokenType.MAIOR, yytext()); }

    /* Operadores Aritmeticos */
    "+" { return new Token(TokenType.MAIS, yytext()); }
    "-" { return new Token(TokenType.MENOS, yytext()); }
    "*" { return new Token(TokenType.MULTIPLICACAO, yytext()); }
    "/" { return new Token(TokenType.DIVISAO, yytext()); }
    
    /* Simbolos */
    "(" { return new Token(TokenType.PARABERTO, yytext()); }
    ")" { return new Token(TokenType.PARFECHADO, yytext()); }
    "[" { return new Token(TokenType.COLCHETEABERTO, yytext()); }
    "]" { return new Token(TokenType.COLCHETEFECHADO, yytext()); }
    "{" { return new Token(TokenType.CHAVEABERTA, yytext()); }
    "}" { return new Token(TokenType.CHAVEFECHADA, yytext()); }
    "," { return new Token(TokenType.VIRGULA, yytext()); }
    ";" { return new Token(TokenType.PONTOEVIRGULA, yytext()); }
    "=" { return new Token(TokenType.ATRIBUICAO, yytext()); }

    /* Erro */
    . { System.out.println("Caractere ilegal: <" + yytext() + ">"); }
}