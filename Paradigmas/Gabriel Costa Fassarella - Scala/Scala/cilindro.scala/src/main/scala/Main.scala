import scala.io.StdIn

object CalculadoraCilindro {
  def main(args: Array[String]): Unit = { // Definindo o main, local em que o codigo sera rodado
    var continuar = true // Condicao de existencia do while

    while (continuar) {
      println("1. Calcular volume do cilindro") // Menu
      println("2. Sair")
      val op = StdIn.readInt() // Dando entrada na opcao

      op match {
        case 1 => // Entrada dos dados do cilindro
          println("Digite o raio do cilindro:")
          val raio = StdIn.readDouble()
          println("Digite a altura do cilindro:")
          val altura = StdIn.readDouble()
          val volume = calcVol(raio, altura)
          println(s"O volume do cilindro é: $volume")

        case 2 => // Fim do codigo
          continuar = false
          println("Encerrando o programa.")
		  
        case _ => // Erro na entrada
          println("Opção inválida. Por favor, tente novamente.")
      }
      println()
    }
  }

  def calcVol(raio: Double, altura: Double): Double = { // Calculo do volume
    val areaB = 3.14 * raio * raio
    val volume = areaB * altura
    volume // Retorna o volume
  }
}