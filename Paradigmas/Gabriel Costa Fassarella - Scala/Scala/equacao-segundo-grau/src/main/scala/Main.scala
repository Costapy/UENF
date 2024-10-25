import scala.math.sqrt // Biblioteca para calculo de raiz

object EquacaoSegundoGrau {
  def CalcEq(a: Double, b: Double, c: Double): Unit = { 
    val delta = b * b - 4 * a * c // Calculo delta

    if (delta > 0) { // Existem 2 raizes reais
      val x1 = (-b + sqrt(delta)) / (2 * a) // Calculo raiz 1
      val x2 = (-b - sqrt(delta)) / (2 * a) // Calculo raiz 2
      println("Raizes:")
      println(s"x1 = $x1")
      println(s"x2 = $x2")
    } else if (delta == 0) { // Existe 1 raiz
      val x = -b / (2 * a) // Calculo da raiz
      println("Raiz:")
      println(s"x = $x")
    } else {
      println("A equacao nao possui raizes reais.") // Delta < 0, logo raiz imaginaria
    }
  }

  def main(args: Array[String]): Unit = { // Main
    // Coeficientes equacao
    val a = 1.0
    val b = -3.0
    val c = 2.0

    CalcEq(a, b, c) // Chamada funcao
  }
}