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

import java.time.*;

public class Funcionario extends Pessoa
{
   private double salario;
   private LocalDate DiaContrato;
 //--------------------------------------------------------
   public Funcionario(String n, double sal, int ano, int mes, int dia)
   {
      super(n);
      this.salario = sal;
      DiaContrato = LocalDate.of(ano, mes, dia);
   }
  //--------------------------------------------------------
   public double getSalario()
   {
      return salario;
   }
  //--------------------------------------------------------
   public LocalDate getDiaContrato()
   {
      return DiaContrato;
   }
  //--------------------------------------------------------
   public String getDescription()
   {
      return String.format("um funcionario com um salario de $%.2f", salario);
   }
   //--------------------------------------------------------
   public void aumento(double Porcentagem)
   {
      double aumento = salario * Porcentagem / 100;
      salario += aumento;
   }
} // fim classe Funcionario

