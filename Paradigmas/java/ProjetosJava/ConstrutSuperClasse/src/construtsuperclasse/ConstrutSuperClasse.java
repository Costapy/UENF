/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019
 * Arquivo: 
 * Assunto: 
 */
package construtsuperclasse;

/**
 *
 * @author Ausberto Castro Vera
 */
class Forma2D { 
  private double largura; 
  private double altura; 
  
  // constructor parametrizado
  Forma2D(double w, double h){
    largura = w;
    altura = h;
}
  double GETLargura(){return largura; }
  double GETAltura(){ return altura; }
  void  SETLargura(double larg){ largura = larg; }
  void SETAltura(double alt){ altura = alt; }
  
  void MostrarDim() { 
    System.out.println("Largura = " + 
                       largura + " e a altura = " + altura); 
  } 
} 
// ------------- Uma subclasse 2D para Traingulos ----------------------------- 
class Triangulo extends Forma2D { 
  private String estilo; 
  
  // Constructor
  Triangulo(String s, double w, double h){
      super(w,h);  // chama construtor Forma2D parametrizado de SUPERclasse 
      estilo = s;
  }     
  double area() { 
    return GETLargura() * GETAltura() / 2; 
  } 
  void MostraEstilo() { 
    System.out.println("O triângulo é " + estilo); 
  } 
} 
//-----------------------------------------------------------------------------
public class ConstrutSuperClasse { 
  public static void main(String args[]) { 
    Triangulo t1 = new Triangulo("Preenchido",4.0,3.0); 
    Triangulo t2 = new Triangulo("Contorno",6.0,9.0); 
    
    System.out.println("Prof. Ausberto Castro Vera - UENF 2018\nHERANÇA - "+
            "Chamando construtores de SUPERclasse\n");
 
    System.out.println("Info para a forma t1: "); 
    t1.MostraEstilo(); 
    t1.MostrarDim(); 
    System.out.println("A AREA é " + t1.area()); 
 
    System.out.println(); 
 
    System.out.println("Info para a forma t2: "); 
    t2.MostraEstilo(); 
    t2.MostrarDim(); 
    System.out.println("A AREA é " + t2.area()+"\n"); 
  } 
}

