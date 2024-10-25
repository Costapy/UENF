;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui 

;;;;;;;;;;;;;;;;   Escolha a linguagem "Determine language from source"
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------racket
(define listaA (list 1 2 3 4 5))
(define listaB (list 6 7 8 9 10))

(display (append listaA (list (car (cdr (cdr listaB))))))

(display (cons (list (car (cdr (cdr listaA)))) listaB))

