/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2023
 * Arquivo: 
 * Assunto:  
 */
package HerancaSimples;
/**
 *
 * @author Prof. Ausberto S. Castro Vera  - 2019-2023
 */
// Uma hierarquia simples. 
// --------------------- Classe de Objetos 2D --------------------------------- 
class Forma2D { 
  double largura; 
  double altura; 
 
  void MostrarDim() { 
    System.out.println("Largura = " + 
                       largura + " e a altura = " + altura); 
  } 
} 
 
// ------------- Uma subclasse 2D para Traingulos ----------------------------- 
class Triangulo extends Forma2D { 
  String estilo; 
   
  double area() { 
    return largura * altura / 2; 
  } 
 
  void MostraEstilo() { 
    System.out.println("O triangulo e' " + estilo); 
  } 
} 
//-----------------------------------------------------------------------------

public class HerancaSimples { 
  public static void main(String args[]) { 
    Triangulo t1 = new Triangulo(); 
    Triangulo t2 = new Triangulo(); 
    
    System.out.println("Prof. Ausberto Castro Vera - UENF 2023\nHERANCA Simples - Formas Geometricas\n");
 
    t1.largura = 4.0; 
    t1.altura = 3.0; 
    t1.estilo = "Preenchido"; 
 
    t2.largura = 6.0; 
    t2.altura = 9.0; 
    t2.estilo = "Contorno"; 
 
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

