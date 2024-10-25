;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023 
;; Aluno: Gabriel Costa Fassarella      <===========  seu nome aqui e abaixo
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------

(display "Escreva o nome e idade de duas pessoas: ")
(newline)
(define n1 (read))
(define i1 (read))
(define n2 (read))
(define i2 (read))

(display "Nome: ") n1
(display "Idade: ") i1
(display "Nome: ") n2
(display "Idade: ") i2