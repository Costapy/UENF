/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2022
 * Arquivo: 
 * Assunto: 
 */

/*
  * @author Prof. Ausberto S. Castro Vera (ascv@uenf.br)
 */

public class Estudante extends Pessoa
{
   private String curso;

   /**
    * @param nome  do estudante
    * @param curso do estudante 
    */
   public Estudante(String n, String cur)
   {
      // passar n  para o construtor da superclasse
      super(n);
      this.curso = cur;
   }

   public String getDescription()
   {
      return "um estudante do curso de " + curso;
   }
} // fim da classe Estudante
