/*
 * Prof. Ausberto S. Castro Vera
 * UENF - CCT - LCMAT Ciencia da Computacao
 * 2019-2022
 * Arquivo: 
 * Assunto: 
 */

/**
 *
 * @author Prof. Ausberto S. Castro Vera (ascv@uenf.br)
 */

//package abstractClasses;

public abstract class Pessoa
{
   private String nome;

   public abstract String getDescription();
   
   public Pessoa(String n)
   {
      this.nome = n;
   }

   public String getNome()
   {
      return nome;
   }
}

