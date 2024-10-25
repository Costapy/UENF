;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; Abril 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------
(newline)
(display "  Paradigmas de Linguagens de Programacao (Prof. Ausberto Castro), 2023")
(newline)
(display "  Aluno:  Gabriel Costa Fassarella ")
(newline)
;;
;;
;; PARES CONSTANTES
;; ---------------------------------------------------

(define x (cons 7 9))
(define y (cons 'a 4))
(define z (cons x y))    ;   (  (7 9) ('a 4) ) 

(define a (cons 5 6))
(define b (cons 6 5))

(define a2 (cons a 6))
(define b2 (cons 6 b))

(define a3 (cons a2 4))
(define b3 (cons 4 b2))

(define a4 (cons a3 8))
(define b4 (cons 8 b3))



;; ---------------------------------------------------
(newline)
(display "O par x = ")
x

(newline)
(display "O par y = ")
y

(newline)
(display "O par z = (x y) = ")
z



(newline)
(display "O par a4 = ")
a4

(newline)
(display "O par b4 = ")
b4
;; ----------------Primeiro e resto ---------------------
(newline)
(display "O primeiro elemento do par x = ")   
(car x)                 ;; primeiro

(newline)
(display "O segundo elemento do par x = ")
(cdr x)                 ;; resto