/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2022
 * Arquivo: 
 * Assunto: 
 */
package metodoparamet;

/**
 *
 * @author Ausberto Castro Vera, 2019-2022
 */
class Veiculo {  
  int passageiros; // numero de passageiros  
  int CapCombust;  // capacidade de combustivel (litros) 
  int kmpl;        // consumo de combustivel Km por litro  
  
      // metodo que exibe autonomia
  void autonomia(){
      System.out.println("Autonomia de " + CapCombust * kmpl + " km\n");
  }
     // metodo que calcula combustivel necessario para certa distancia
  double GasolinaNecessaria(int kilometros){
      return (double) kilometros/kmpl; 
  }
}  

public class MetodoParamet {  
  public static void main(String args[]) {  
    Veiculo minivan = new Veiculo();  
    Veiculo sportscar = new Veiculo();  
    
    System.out.println("\nArquivo: MetodoParamet.java\n");   
    
    double litros;
    int distancia = 252;
    
    System.out.println("Prof. Ausberto Castro Vera - UENF 2022\n");
    System.out.println("Arquivo: MetodoParamet.JAVA\n"); // Nome do arquivo JAVA        
    
    // atribui valores para campos de minivan  
    minivan.passageiros = 7; 
    minivan.CapCombust = 48; 
    minivan.kmpl = 12; 
  
    // atribui valores para campos de sportscar 
    sportscar.passageiros = 2; 
    sportscar.CapCombust = 45; 
    sportscar.kmpl = 16; 
  
    // Calcula a a autonomia com tanque cheio: Minivan  
    litros = minivan.GasolinaNecessaria(distancia); 
    System.out.println("Para ir " + distancia + " kms, a minivan precisa " + litros +
            " litros de gasolina. \n");                    

        // Calcula a a autonomia com tanque cheio: Carro Esportivo  
    litros = sportscar.GasolinaNecessaria(distancia); 
    System.out.println("Para ir " + distancia + " kms, o carro esportivo precisa " + 
            litros + " litros de gasolina. \n");  
                    
  }  
}
