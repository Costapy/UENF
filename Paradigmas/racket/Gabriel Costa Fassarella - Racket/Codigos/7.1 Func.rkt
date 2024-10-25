;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |7.1 Func|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella     <===========  escreva seu nome aqui

;;;;;;;;;;;;;;;;   Escolha a linguagem R5RS
; ------------------------------------------------

(define raiz
  (lambda (x)
    (begin
      (display "Raiz de ")
      (display x)
      (display " = ")
      (display (sqrt x))
      (newline))))

(define seno
  (lambda (x)
    (begin
      (display "Seno(") (display x) (display ") = ")
      (sin x)
      )
    )
  )

(raiz 25)
(seno 90)
