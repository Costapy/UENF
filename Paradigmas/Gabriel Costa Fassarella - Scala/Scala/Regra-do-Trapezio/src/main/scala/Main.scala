object RegraDoTrapezio {
  def main(args: Array[String]): Unit = {
    val a = 0.0 // Limite inferior do intervalo
    val b = 2.0 // Limite superior do intervalo
    val n = 10 // Número de subintervalos
    
    val h = (b - a) / n // Tamanho de cada subintervalo
    val x = Array.tabulate(n + 1)(i => a + i * h) // Pontos xi tal que i = 0, 1, ..., n
    val y = x.map(f) // Valores de f(xi) para cada xi
    
    val integral = (h / 2) * (y.head + 2 * y.drop(1).dropRight(1).sum + y.last)
    
    println(s"Aproximacao da integral: $integral")
  }
  
  def f(x: Double): Double = {
    // Definindo a funcao que sera integrada
    x * x // f(x) = x^2
  }
}