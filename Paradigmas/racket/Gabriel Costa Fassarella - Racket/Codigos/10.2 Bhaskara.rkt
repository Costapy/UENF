;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |10.2 Bhaskara|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; Abril 2023
;; Aluno: Gabriel Costa Fassarella     <===========  escreva seu nome aqui
;;
;;#lang racket      ;; define a linguagem default
; ------------------------------------------------

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

(bhaskara1 22 -55 10)
(newline)
(bhaskara2 22 -55 10)