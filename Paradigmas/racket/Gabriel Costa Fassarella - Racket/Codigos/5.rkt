;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui 

;;;;;;;;;;;;;;;;   Escolha a linguagem "Determine language from source"
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------racket

(define lista (list 1 2 3 4 5))

(display (car (cdr (cdr (reverse lista)))))
