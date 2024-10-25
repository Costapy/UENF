/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2020-2023
 * Arquivo: 
 * Assunto: 
 */

/**
 * 
 * @author Ausberto Castro Vera, 2023 
 */

class Veiculo {  
  int passageiros; // numero de passageiros  
  int CapCombust;  // capacidade de combustivel (litros) 
  int kmpl;        // consumo de combustivel Km por litro 
  
      // metodo que exibe autonomia
  void autonomia(){
      System.out.println("Autonomia de " + CapCombust * kmpl + " km\n");
  }
}  
// Esta classe declara um objeto de tipo Veiculo.    
class VeiculoMetodo {  
  public static void main(String args[]) {  
    Veiculo minivan = new Veiculo();  
    Veiculo sportscar = new Veiculo();  
 
    int autonomia1, autonomia2;  
    
    System.out.println("Prof. Ausberto Castro Vera - UENF 2023\n");   
    System.out.println("\nArquivo: VeiculoMetodo.java\n");   
  
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
  
    System.out.println("Minivan pode transportar " + minivan.passageiros + " passageiros. ");
    minivan.autonomia();                    
 
    System.out.println("Carro esportivo pode transportar " + sportscar.passageiros + " passageiros. \n");
    sportscar.autonomia();                  
  }  
}
