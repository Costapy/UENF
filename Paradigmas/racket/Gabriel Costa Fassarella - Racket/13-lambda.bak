;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023 
;; Aluno: Fulano      <===========  seu nome aqui e abaixo
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------
(newline)
(display "  UENF-CCT-LCMAT-CC, 2023")
(newline)
(display "  Paradigmas de Linguagens de Programacao (Prof. Ausberto Castro)")
(newline)
(display "  Aluno:  Fulano ")
(newline)
;;
;;
;;  Expressoes LAMBDA e Recursão
;; ---------------------------------------------------
;; Expressoes LAMBDA sao utilizados para criar novos procedimentos
;;    (lambda (var ....) expr1  expr2 ....)


;; ------------- tamanho de uma lista ----------------
(define comprimento
  (lambda (lista)
    (if (null? lista)
        0
        (+ (comprimento (cdr lista)) 1)
        )
    )
  )
;;--------------- remove um elemento de uma lista -----
(define remove
  (lambda (x lista)
    (cond
      ((null? lista) '())
      ((eqv? (car lista) x) (remove x (cdr lista)))
      (else (cons (car lista) (remove x (cdr lista))))
     )
    )
  )


;;---------------------------------------------------
(define inverso
  (lambda (n)
    (if (and (number? n) (not (= n 0)))
        (/ 1 n)
        "Nao e' um numero"
     )
    )
  )



;; -------  Executando .....
;;--------------------------------------
;;
(define a (list 0 1 2 3 4 6 7 8 11 5 13 15))
(newline)
(display "lista: ")  a
 
 (display "tamanho da lista: ")
 (comprimento a)
 
 (display "Removendo um elemento (o 5): ")
 (remove 5 a)
 
 (display "Inverso de 71 = ")
 (inverso 71)