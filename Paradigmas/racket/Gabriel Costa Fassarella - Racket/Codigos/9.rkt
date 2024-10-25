;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui 

;;;;;;;;;;;;;;;;   Escolha a linguagem "Determine language from source"
;;
#lang racket      ;; define a linguagem default
; ------------------------------------------------racket

(define (k-enesimo k)
  (if (even? k)
      (* (/ k 2) 1)
      (if (= k 1)
          1
          (* (ceiling (/ k 2)) -1))))

(k-enesimo 10)