;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; Abril 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------

(define p1 (cons 15 105))
(define p2 (cons 'k 62.5))

(display "Primeiro elemento de p1 = ")
(display (car p1))
(newline)
(display "Segundo elemento de p1 = ")
(display (cdr p1))
(newline)

(display "Primeiro elemento de p2 = ")
(display (car p2))
(newline)
(display "Segundo elemento de p2 = ")
(display (cdr p2))
(newline)
