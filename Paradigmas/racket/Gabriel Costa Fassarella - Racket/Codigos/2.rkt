;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui 

;;;;;;;;;;;;;;;;   Escolha a linguagem "Determine language from source"
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------racket

(define (bhaskara1 a b c)
  (begin
    (display "x1 = ")
    (let ((delta (-(expt b 2) (* 4 (* a c)))))
        (if (< delta 0)
            (error "delta menor que 0...")
            (/ (- (- b) (sqrt delta)) (* 2 a)))
        )
  )
)

(define (bhaskara2 a b c)
  (begin
    (display "x2 = ")
    (let ((delta (-(expt b 2) (* 4 (* a c)))))
        (if (< delta 0)
            (error "delta menor que 0...")
            (/ (+ (- b) (sqrt delta)) (* 2 a)))
        )
  )
)

(sqrt(bhaskara1 1 5 -3))
(newline)
(sqrt(bhaskara2 1 5 -3))
