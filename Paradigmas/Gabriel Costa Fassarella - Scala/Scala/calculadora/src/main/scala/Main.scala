class Calculadora {
	// Definindo as operacoes basicas da classe (metodos)
	def add(a: Int, b: Int): Int = a + b
	
	def sub(a: Int, b: Int): Int = a - b
	
	def mult(a: Int, b: Int): Int = a * b
	
	def div(a: Float, b: Float): Float = {
		if (b != 0) //Verificando se ocorre uma divisao por 0
		a / b
		else
		throw new ArithmeticException("Divisao por zero nao e permitida!")
	}
}

// Definindo o main, onde o programa sera rodado
object Main {
	def main(args: Array[String]): Unit = {
		// Criando uma instancia da classe Calculadora
		val calculadora = new Calculadora()
		
		// Realizando as operacoes
		val sum = calculadora.add(4, 2)
		val dif = calculadora.sub(4, 2)
		val prod = calculadora.mult(4, 2)
		val quot = calculadora.div(4, 2)
		
		// Imprimindo os resultados
		println(s"Soma: $sum")
		println(s"Diferenca: $dif")
		println(s"Produto: $prod")
		println(s"Quociente: $quot")
	}
}