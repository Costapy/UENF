-/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2020-2023
 * Arquivo: 
 * Assunto: 
 */

/*
 *
 * @author Ausberto S. Castro Vera, 2023
 * Um programa que usa a classe Veiculo.  
*/   
class Veiculo {  
  int passageiros;   // numero de passageiros  
  int CapCombust;    // capacidade de combustivel 
  int kmpl;          // consumo combustible km/litro 
}  
// Esta classe declara UM objeto de tipo Veiculo.  
class VeiculoTeste {  
  public static void main(String args[]) {  
    Veiculo minivan = new Veiculo();  
    int autonomia;  
    
    System.out.println("Prof. Ausberto Castro Vera - UENF 2023\n");   
    System.out.println("\nArquivo: Veiculo.java\n");
  
    // Instanciando 
    minivan.passageiros = 7; 
    minivan.CapCombust = 16; 
    minivan.kmpl = 21; 
      // Calculos 
    autonomia = minivan.CapCombust * minivan.kmpl; 
  
    System.out.println("A minivan pode transportar " + minivan.passageiros + 
                       " passageiros com uma autonomia de " + autonomia + " kms\n");  
  }  
}

