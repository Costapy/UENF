Algoritmo "Registro sla"

tipo

   empresa = registro
      nomef : caractere
      cnpj : inteiro
      endereco : caractere
   fimregistro

fimregistro

produtos = registro
   nome : inteiro
   codigo : inteiro
   preco : real
   fornecedor : empresa

fimregistro

Var

   vet : vetor[1..500] de produtos
   i : inteiro
   val : real


procedimento busca()

inicio

   para i de 1 até 10 faça
      se vet[i].preco >= val então
         escreval("O produto encontrado é ", vet[i].nome)
      fimse
   fimpara


fimprocedimento

Inicio

   para i de 1 até 10 faça
      escreva("Nome do produto: ")
      vet[i].nome  <- randi(10)
      escreva("Código do produto: ")
      vet[i].codigo  <- randi(10)
      escreva("Preço do produto: ")
      vet[i].preco  <- randi(10)
      vet[i].fornecedor.nomef <- randi(10)
      vet[i].fornecedor.cnpj <- randi(10)
      vet[i].fornecedor.endereco <- randi(10)
   fimpara
   escreval()
   escreva("Digite o valor desejado: ")
   leia(val)
   busca()


Fimalgoritmo