;; Introdução à Linguagem Racket (Scheme)
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui
;;
#lang racket      ;; define a linguagem default
;; define a linguagem default: R5RS
; ------------------------------------------------
(display "  UENF-CCT-LCMAT-CC, 2023")
(newline)
(display "  Paradigmas de Linguagens de Programacao (Prof. Ausberto Castro")
(newline)
(display "  Aluno:  Gabriel Costa Fassarella ")
(newline)
;;
;;
;; LISTAS - Parte 1  
;; ------------------------------------------------


(define x (cons 5 6))
(define y (cons 8 9))

;; Utilizando pares de constantes e recursividade

(define lista1 (cons 1 x))

(define lista2 (cons 2 lista1))

(define lista3 (cons 2 lista2))


;; Utilizando o comando LIST

(define A (list 1 2 3 4 5))    ; metodo direto
(define B (list 6 7 8 9))      ; metodo direto
(define C (list A B))
(define D (append A B))

;;--------------------------------------
(newline)
(display "Lista A = ")
A

(newline)
(display "Lista B = ")
B

(newline)
(display "Lista C = (list A B)= ")
C

(newline)
(display "Lista D = (append A B)= ")
D

(newline)
(display "Lista D reversa = ")
(reverse D)      ;; lista inversa

(newline)
(display "Comprimento da lista B = ")
(length B)       ;; comprimento de uma lista

;;------------ primeiro elemento y Resto da lista -----------------
(newline)
(display "PRIMEIRO elemento da lista B = ")
(car B)

(newline)
(display "RESTO da lista B = ")
(cdr B)
