;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  seu nome aqui e abaixo
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------
(newline)
(display "  UENF-CCT-LCMAT-CC, 2023")
(newline)
(display "  Paradigmas de Linguagens de Programacao (Prof. Ausberto Castro)")
(newline)
(display "  Aluno:  Gabriel Costa Fassarella ")
(newline)

(let ((a 10))
  (and (>= a 10) (< a 15)))

(let ((a 8))
  (or (equal? a 2) (not (equal? a 4))))

(let ((a 8))
  (and (equal? a 8) (equal? a 4)))

(let ((a 8))
  (or (equal? a 2) (equal? a 4)))

(display "not(5 > 3) = ") (not(> 5 3))
