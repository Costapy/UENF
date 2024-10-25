object SistemaEquacoes {

  def resSist(a11: Double, a12: Double, b1: Double, a21: Double, a22: Double, b2: Double): Option[(Double, Double)] = {
    val det = a11 * a22 - a12 * a21 // Calculo do determinante

    if (det != 0) {
      // Calculo solucao
      val x = (b1 * a22 - b2 * a12) / det
      val y = (a11 * b2 - a21 * b1) / det
      Some(x, y)
    } else {
      None // O sistema nao tem solucao unica
    }
  }

  def main(args: Array[String]): Unit = {
    // Coeficientes
    val a11 = 2.0
    val a12 = 3.0
    val b1 = 10.0
    val a21 = 1.0
    val a22 = -1.0
    val b2 = -5.0

    val solucao = resSist(a11, a12, b1, a21, a22, b2) // Chamada funcao

    solucao match {
      case Some((x, y)) =>
        println(s"Solucao: x = $x, y = $y")
      case None =>
        println("O sistema nao tem solucao unica...")
    }
  }

}