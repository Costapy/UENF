;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Fulano      <===========  escreva seu nome aqui

;;;;;;;;;;;;;;;;   Escolha a linguagem R5RS
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------
(display "  UENF-CCT-LCMAT-CC, 2023")
(newline)
(display "  Paradigmas de Linguagens de Programacao (Prof. Ausberto Castro)")
(newline)
(display "  Aluno:  Fulano ")
(newline)
;;
;;
;; DEFINICAO DE FUNCOES-procedimentos  usando lambda
;;       (define  NomeFuncao  (lambda  ( parametros )  (definicao) )  ) 
;;---------------------------------------------------

;;--------------------------------------
;; Procedimento (lambda ParametrosFormais Corpo)
(define ADICIONA
      (lambda  (a  b)           ; parametros formais
        (+ a b )                ; corpo do procedimento ADICIONA
       )
)  
;;--------------------------------------
;;
;;
(define soma
  (lambda (x y) 
    (begin
      (newline)
      (display "A soma de ")
      (display x)
       (display " e ")
       (display y)
       (display " = ")
      (+ x y)
     )
   )
)
;;---------------------------------------------
(define produto
  (lambda (x y) 
    (begin
      (newline)
      (display "O produto de ") (display x) (display " e ") (display y)
      (display " = ")
      (* x y)
     )
   )
)
;;---------------------------------------------
(define divisao
  (lambda (x y) 
    (begin
      (newline)
      (display "A divisao ") (display x) (display "/") (display y)(display " = ")
      (/ x y)
     )
   )
)
;;---------------------------------------------
(define diferenca
  (lambda (x y) 
    (begin
      (newline)
      (display "A diferenca ") (display x) (display "-") (display y)(display " = ")
      (- x y)
     )
   )
)
;;---------------------------------------------
(define quadrado
     (lambda ( a )
       (newline)
      (display "O quadrado de ") (display a) (display " = ")
       ( * a a)
       )
  )
;;---------------------------------------------

;;----------- Executando funcoes --------------

(ADICIONA 25 15)
(ADICIONA 30 40)

(soma 45 32)
(produto 21 15)
(divisao 420 7)
(diferenca 89 35)
(quadrado 09)