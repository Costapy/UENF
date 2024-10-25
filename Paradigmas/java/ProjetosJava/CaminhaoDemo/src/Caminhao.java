/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019
 */

/**
 *
 * @author Prof. Ausberto S. Castro Vera
 */

//-------------------------- CLASSE --------------------------------------------
class Veiculo {  
  int passageiros; // numero de passageiros  
  int CapCombust;  // capacidade de combustivel (litros) 
  int kmpl;        // consumo de combustivel Km por litro 
  
      //MÃ©todo  CONSTRUCTOR para Veiculo (com o mesmo nome da classe)
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
//----------------------------------------------------------------------------
  // MÃ©todos de acesso. 
  int GETPassageiros() { return passageiros; } 
  void SETPPassageiros(int p) { passageiros = p; } 
  int GETCapCombust() { return CapCombust; } 
  void SETCapCombust(int f) { CapCombust = f; } 
  int GETkmpl() { return kmpl; } 
  void SETkmpl(int m) { kmpl = m; }  
}    
  
// Extende Veiculo para a especializaÃ§Ã£o Caminhao.    
class Caminhao extends Veiculo {  
  private int CapCarga; // capacidade carga   
  // Construtor para Caminhao.  
  Caminhao(int p, int f, int m, int c) {  
      // Inicializa Veiculo usando variaveis do construtor Veiculo 
    super(p, f, m);  
 
    CapCarga = c;  
  }  
  // mÃ©todos de acesso para CapCarga. 
  int GETCarga() { return CapCarga; } 
  void PUTCarga(int c) { CapCarga = c; } 
}  
    
class CaminhaoDemo {    
  public static void main(String args[]) {    
  
    System.out.println("\nArquivo: Caminhao.java\n");
            
    // construct some trucks 
    Caminhao semi = new Caminhao(2, 200, 7, 44000);    
    Caminhao pickup = new Caminhao(3, 28, 15, 2000);    
    double litros;   
    int dist = 350;   
   
    litros = semi.GasolinaNecessaria(dist);    
    
    System.out.println("O caminhao Semi pode transportar " + semi.GETCarga() +  
                       " quilos."); 
    System.out.println("Para ir " + dist + " km o caminhÃ£o semi precisa " +   
                       litros + " litros de gasolina.\n");   
       
    litros = pickup.GasolinaNecessaria(dist);    
    
    System.out.println("A Pickup pode transportar " + pickup.GETCarga() +  
                       " quilos."); 
    System.out.println("Para ir " + dist + " kms a pickup precisa " +   
                       litros + " litros de gasolina.\n");  
  }    
}

