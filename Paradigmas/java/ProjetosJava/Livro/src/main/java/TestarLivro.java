/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019
 * Arquivo: 
 * Assunto: Classes
 */

/**
 *
 * @author Prof. Ausberto S. Castro Vera (ascv@uenf.br)
 */
import java.util.Scanner;

class Book {

    String titulo;
    String autor;
    String editora;

}  // fim da classe livro
        

public class TestarLivro {
    public static void main (String[]args){
        Book liv01  = new Book();  
        Book liv02 = new Book(); 
        
        Scanner input = new Scanner (System.in);


        
        // Instanciando 
        liv01.titulo = "Java para Iniciantes, 6Ed";
        liv01.autor = "Herbert Schildt";
        liv01.editora = "Bookman";
 
        liv02.titulo = "Java, Como programar, 10Ed";
        liv02.autor = "Paul Deitel, Harvey Deitel";
        liv02.editora = "Pearson";
        

        //The Book List
        System.out.println("A Lista de Livros:");
        System.out.println("1) Schildt.\n2) Deitel \n");
        System.out.println("Escolha seu livro para saber informações: ");
        int option = input.nextInt();
        
        if (option == 1)
            System.out.println("Titulo: "+liv01.titulo+",\nAutor: "+liv01.autor + "\nEditora:  "+ liv01.editora);
        else System.out.println("Titulo: "+liv02.titulo+",\nAutor: "+liv02.autor + "\nEditora:  "+ liv02.editora);

    } // fim do método main
} //fim da classe  TestarLivro
