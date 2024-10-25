object QuickSort {
  def main(args: Array[String]): Unit = { // Main
    val arr = Array(64, 34, 25, 12, 22, 11, 90) // Definindo array
    println("Array antes da ordenacao:")
    println(arr.mkString(", "))

    quickSort(arr, 0, arr.length - 1) // Chamada da funcao

    println("Array apos a ordenacao:")
    println(arr.mkString(", "))
  }

  def quickSort(arr: Array[Int], a: Int, b: Int): Unit = { // Definindo funcao quick sort
    if (a < b) { // Caso ainda tenham dados no array
      val pivo = partition(arr, a, b)

      // Chamadas recursivas
      quickSort(arr, a, pivo - 1)
      quickSort(arr, pivo + 1, b)
    }
  }

  def partition(arr: Array[Int], a: Int, b: Int): Int = {
    val pivo = arr(b) // Define o pivo
    var i = a - 1 

    for (j <- a until b) { // Loop para percorrer o array
      if (arr(j) <= pivo) { // Procurando menor valor
        i += 1
        swap(arr, i, j) // Funcao de troca
      }
    }

    swap(arr, i + 1, b) // Funcao de troca
    i + 1
  }

  def swap(arr: Array[Int], i: Int, j: Int): Unit = { // Funcao de troca
    val temp = arr(i)
    arr(i) = arr(j)
    arr(j) = temp
  }
}