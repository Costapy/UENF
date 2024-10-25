/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2023
 * Arquivo: 
 * Assunto: 
 */
package doisveiculos; 

/**
 *
 * @author Prof. Ausberto S. Castro Vera, 2019-2023 
 */
class Veiculo {  
  int passageiros; // numero de passageiros  
  int CapCombust;  // capacidade de combustivel (litros) 
  int kmpl;        // consumo de combustivel Km por litro 
}  
  
// Esta classe declara um objeto de tipo Veiculo.    
class DoisVeiculos {  
  public static void main(String args[]) {  
    Veiculo minivan = new Veiculo();  
    Veiculo sportscar = new Veiculo();  
 
    int autonomia1, autonomia2;  
    
    System.out.println("Prof. Ausberto Castro Vera - UENF 2023");
    System.out.println("\nArquivo: DoisVeiculos.JAVA\n"); // Nome do arquivo JAVA    
  
    // atribui valores para campos de minivan  
    minivan.passageiros = 7; 
    minivan.CapCombust = 48; 
    minivan.kmpl = 12; 
  
    // atribui valores para campos de sportscar 
    sportscar.passageiros = 2; 
    sportscar.CapCombust = 45; 
    sportscar.kmpl = 16; 
  
    // Calcula a a autonomia com tanque cheio  
    autonomia1 = minivan.CapCombust * minivan.kmpl; 
    autonomia2 = sportscar.CapCombust * sportscar.kmpl; 
  
    System.out.println("Minivan pode transportar " + minivan.passageiros + 
                       " passageiros, em "  + autonomia1 + " kms\n");  
 
    System.out.println("Carro esportivo pode transportar " + sportscar.passageiros + 
                       " passageiros, em " + autonomia2 + " kms\n\n");  
  }  
}

