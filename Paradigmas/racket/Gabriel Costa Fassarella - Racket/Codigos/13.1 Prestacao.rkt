;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023 
;; Aluno: Gabriel Costa Fassarella      <===========  seu nome aqui e abaixo
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------

(define prestacao
  (lambda (val tax t)
    (display "Valor prestação = ")
    (display (+ val (* (* val (/ tax 100)) t)))
    (newline)
    )
  )

(prestacao 1000 10 5)
(prestacao 500 3 2)
(prestacao 5500 8 4)