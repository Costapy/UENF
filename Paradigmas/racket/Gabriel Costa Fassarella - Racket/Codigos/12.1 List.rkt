;; Introdução à Linguagem Racket (Scheme)
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui
;;
#lang racket      ;; define a linguagem default
;; define a linguagem default: R5RS
; ------------------------------------------------

(define lista1 (list 1 2 3 4 5 6))
(define lista2 (list 7 8))

(display "lista 1 = ")
(display lista1)
(newline)
(display "Primeiro item = ")
(display (car lista1))
(newline)
(display "Ultimo item = ")
(display (car(reverse lista1)))
(newline)
(display "Comprimento da Lista = ")
(display (length lista1))
(newline)
(display "lista 1 + lista 2 = ")
(display (append lista1 lista2))
