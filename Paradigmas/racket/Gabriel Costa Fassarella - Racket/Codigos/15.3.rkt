;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;;  2023
;; Aluno: Gabriel Costa Fassarella     <===========  seu nome aqui e abaixo
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------

(define equac
  (lambda ( x ) (- (+ (* x x)(* 3 x)) 9)
  )
)

(define lista (list 1 2 3 4 5))

(map equac lista)