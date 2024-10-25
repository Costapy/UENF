/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2022
 * Arquivo: 
 * Assunto: Este programa mostra o uso de classes abstratas
 */

/**
 *
 * @author Prof. Ausberto S. Castro Vera (ascv@uenf.br)
 */

public class TestarPessoa
{
   public static void main(String[] args)
   {
      Pessoa[] gente = new Pessoa[2];

      // Preenche os vetores com objetos Estudante e Funcionario
      gente[0] = new Funcionario("Eduardo Macedo", 7580, 1989, 10, 1);
      gente[1] = new Estudante("Maria da Silva", "Computer Science");

      // Imprime nomes e descrições dos objetos Pessoa
      for (Pessoa p : gente)
         System.out.println(p.getNome() + ", " + p.getDescription());
   }
}