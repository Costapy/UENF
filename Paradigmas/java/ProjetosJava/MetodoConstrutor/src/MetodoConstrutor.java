/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2020-2022
 * Arquivo: 
 * Assunto: 
 */
/**
 *
 * @author Ausberto Castro Vera, 2023
 */
//-------------------------- CLASSE --------------------------------------------
class Veiculo {  
  int passageiros; // numero de passageiros  
  int CapCombust;  // capacidade de combustivel (litros) 
  int kmpl;        // consumo de combustivel Km por litro 
  
      //Método  CONSTRUCTOR para Veiculo (com o mesmo nome da classe)
  Veiculo(int p, int cc, int k){
      passageiros = p;
      CapCombust = cc;
      kmpl = k; 
  }
      // metodo que exibe autonomia
  void autonomia(){
      System.out.println("Autonomia de " + CapCombust * kmpl + " km\n");
  }
     // metodo que calcula combustivel necessario para certa distancia
  double GasolinaNecessaria(int kilometros){
      return (double) kilometros/kmpl; 
  }
}  
//----------------------------------------------------------------------------
class  MetodoConstrutor {  
  public static void main(String args[]) {  
      // constroi veiculos completos 
      Veiculo minivan = new Veiculo(7,48,12);  
      Veiculo sportscar = new Veiculo(2,45,16);  
    
    double litros;
    int distancia = 500;
 
    // Nome do arquivo JAVA       
    System.out.println("\nArquivo: MetodoConstrutor.JAVA\n"); 
    System.out.println("Prof. Ausberto Castro Vera - UENF 2023\n");
    
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
