;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui 

;;;;;;;;;;;;;;;;   Escolha a linguagem "Determine language from source"
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------racket

(define quad (lambda (l)
      (* l 4)   
    )
  )

(define circ (lambda (r)
      (* (* 2 3.14) r)   
    )
  )

(define tri (lambda (l1 l2 l3)
      (+ (+ l1 l2) l3)   
    )
  )

(quad 2)
(circ 5)
(tri 3 5 4)