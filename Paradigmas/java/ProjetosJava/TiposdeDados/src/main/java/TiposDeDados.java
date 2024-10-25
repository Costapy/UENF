/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019
 * Arquivo: 
 * Assunto: 
 */

/**
 *
 * @author Prof. Ausberto S. Castro Vera (ascv@uenf.br)
 */
public class TiposDeDados {
public static void main(String args[]) {  
    int var;  // Aqui declaramos variavel int  
    double x, y; // Aqui declaramos variavel floating-point 
    
    System.out.println("\nArquivo: TiposDados.JAVA\n"); 
 
    var = 10; // atribuição inteira 
    
    x = 10.0; // atribuição real 10.0 
    y = 10.0; // atribuição real 10.0 
    
    System.out.println("Valor Original para var: " + var); 
    System.out.println("Valor Original para x: " + x); 
 
    System.out.println(); // imprime linha em branco 
 
    // agora, divide as duas por 4 
    var = var / 4;  
    x = x / 4; 
 
    System.out.println("var depois da divisão: " + var); 
    System.out.println("x depois da divisão: " + x); 
    y = y / 7;    // dividr por 7
    System.out.println("y depois da divisão por 7: " + y); 
    System.out.println(); // imprime linha em branco     
  }  
    
}
