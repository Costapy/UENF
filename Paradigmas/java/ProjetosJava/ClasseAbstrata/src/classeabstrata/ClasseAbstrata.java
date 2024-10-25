/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2022
 * Arquivo:  
 * Assunto: 
 */
package classeabstrata;

/**
 *
 * @author Ausberto Castro Vera
 */
// Cria uma classe ABSTRATA
abstract class Forma2D {  
  private double Largura;  
  private double Altura;  
  private String Nome;  
  
  // Construtor padrão.  
  Forma2D() {  
    Largura = Altura = 0.0;  
    Nome = "none";  
  }  
  
  // Construtor parametrizado.  
  Forma2D(double w, double h, String n) {  
    Largura = w;  
    Altura = h;  
    Nome = n;  
  }  
  
  // Constroi objeto com Largura e Altura.  
  Forma2D(double x, String n) {  
    Largura = Altura = x;  
    Nome = n;  
  }  
  
  // Constroi um objeto a partir de outro.  
  Forma2D(Forma2D ob) {  
    Largura = ob.Largura;  
    Altura = ob.Altura;  
    Nome = ob.Nome;  
  }  
  
  // Métodos acessadores para Largura e Altura.  
  double getLargura() { return Largura; }  
  double getAltura() { return Altura; }  
  void setLargura(double w) { Largura = w; }  
  void setAltura(double h) { Altura = h; }  
  
  String getNome() { return Nome; }  
  
  void showDim() {  
    System.out.println("Largura e Altura sao " +  
                       Largura + " e " + Altura);  
  }  
  
  // Método ABSTRATO
   abstract double area(); 
}  

//===================== SubClasse ===========================
// Uma subclasse de Forma2D para triangulos. 
class Triangulo extends Forma2D {  
  private String style;  
    
  // Construtor padrão.  
  Triangulo() {  
    super();  
    style = "none";  
  }  
  
  // Construtor para Triangulo.  
  Triangulo(String s, double w, double h) {  
    super(w, h, "Triangulo");  
  
    style = s;   
  }  
  
  // Construtor com um argumento. 
  Triangulo(double x) {  
    super(x, "Triangulo"); // call superclass constructor  
  
    style = "Preenchido";   
  }  
  
  // Constroi um objeto a partir de outro.  
  Triangulo(Triangulo ob) {  
    super(ob); // passa objeto para construtor de Forma2D  
    style = ob.style;  
  }  
  
  // Override area() for Triangulo. 
  double area() {  
    return getLargura() * getAltura() / 2;  
  }  
  
  void showStyle() {  
    System.out.println("O Triangulo´ e' " + style);  
  }  
} //------------------------ fim subclasse ----------------------- 
 

//===================== SubClasse ===========================
// Uma subclasse de Forma2D para retangulos.   
class Retangulo extends Forma2D {   
  // Construtor padrão.  
  Retangulo() {  
    super();  
  }  
  
  // Construtor para Retangulo.  
  Retangulo(double w, double h) {  
    super(w, h, "Retangulo"); // chama construtor da superclass  
  }  
  
  // Constroi um quadrado.  
  Retangulo(double x) {  
    super(x, "Retangulo"); // chama construtor da superclass  
  }  
  
  // Constroi um objeto a partir de outro.  
  Retangulo(Retangulo ob) {  
    super(ob); // passa objeto para construtor de Forma2D  
  }  
  
  boolean eQuadrado() {   
    if(getLargura() == getAltura()) return true;   
    return false;   
  }   
     
  // Sobre-escreve area() para Retangulo. 
  double area() {   
    return getLargura() * getAltura();   
  }   
}  //------------------------ fim subclasse ----------------------- 
  

// ============== Classe PRINCIPAL ================================
public class ClasseAbstrata {  
  public static void main(String args[]) {  
    Forma2D shapes[] = new Forma2D[4];  // 
  
    shapes[0] = new Triangulo("contorno", 8.0, 12.0);  
    shapes[1] = new Retangulo(10);  
    shapes[2] = new Retangulo(10, 4);  
    shapes[3] = new Triangulo(7.0);  

    System.out.println("\nProf. Ausberto Castro - Arquivo: ClasseAbstrata.java\n");
  
    for(int i=0; i < shapes.length; i++) {  
      System.out.println("O objeto e' um " + shapes[i].getNome());  
      System.out.println("A AREA e' " + shapes[i].area());  
  
      System.out.println();    
    }  
  }  
} //---------- Fim classe Principal ---------------------------------------
