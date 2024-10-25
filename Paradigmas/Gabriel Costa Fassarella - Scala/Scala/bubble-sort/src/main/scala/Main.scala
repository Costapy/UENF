object BubbleSortExample {
  def BubbleSort(arr: Array[Int]): Array[Int] = { // Funcao de bubble sort
    val n = arr.length // Definindo o tamanho do array
    for (i <- 0 until n - 1) { // For para percorrer o array
      for (j <- 0 until n - i - 1) { // For para percorrer o array e realizar as comparacoes
        if (arr(j) > arr(j + 1)) { // Verificando se o proximo valor e menor que o valor atual
          val temp = arr(j) // Troca
          arr(j) = arr(j + 1)
          arr(j + 1) = temp
        }
      }
    }
    arr // Retorna
  }

  def main(args: Array[String]): Unit = { // Definindo o main
    val array = Array(64, 34, 25, 12, 22, 11, 90) // Definindo o array
    val sortArray = BubbleSort(array) // Chamada da funcao
    println(sortArray.mkString(", ")) // Mostrando para o usuario
  }
}
