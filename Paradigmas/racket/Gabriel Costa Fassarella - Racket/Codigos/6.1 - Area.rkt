;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |6.1 - Area|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
;; Introdução à Linguagem Racket (Scheme)
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui
;; 
;; Liguagem Advanced Student       ;; define a linguagem default
;; O primeiro programa Racket
;; ---------------------------------------------------

(display "Area do quadrado: ")
(let ((l 5))
    (* l l))
(newline)

(display "Area de um trapezio: ")
(let ((b 5) (B 10) (h 4))
    (/ (* (+ b B) h) 2))
(newline)

(display "Area de um poligono: ")
(let ((ql 4) (l 5))
  (/ (* (* ql l) (/ l 2)) 2))
(newline)