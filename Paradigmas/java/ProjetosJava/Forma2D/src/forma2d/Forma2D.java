/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019
 * Arquivo: 
 * Assunto: 
 */
package forma2d; 

/**
 *
 * @author Prof. Ausberto S. Castro Vera
 */
class Forma2Dim { 
  private double largura; 
  private double altura; 
 
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
class Triangulo extends Forma2Dim { 
  String estilo; 
   
  double area() { 
    return GETLargura() * GETAltura() / 2; 
  } 
 
  void MostraEstilo() { 
    System.out.println("O tria¢ngulo e' " + estilo); 
  } 
} 

//------------------------ MAIN ------------------------------------------------
class Forma2D { 
  public static void main(String args[]) { 
    Triangulo t1 = new Triangulo(); 
    Triangulo t2 = new Triangulo(); 
    
    System.out.println("Prof. Ausberto Castro Vera - UENF 2018\nHERANCA - "+
            "Uso  de Metodos para Acesso\n");
 
    t1.SETLargura(4.0); 
    t1.SETAltura(3.0); 
    t1.estilo = "Preenchido"; 
 
    t2.SETLargura(6.0); 
    t2.SETAltura(9.0); 
    t2.estilo = "Contornado"; 
 
    System.out.println("Info para a forma t1: "); 
    t1.MostraEstilo(); 
    t1.MostrarDim(); 
    System.out.println("A AREA e' " + t1.area()); 
 
    System.out.println(); 
 
    System.out.println("Info para a forma t2: "); 
    t2.MostraEstilo(); 
    t2.MostrarDim(); 
    System.out.println("A AREA e' " + t2.area()); 
  } 
}
