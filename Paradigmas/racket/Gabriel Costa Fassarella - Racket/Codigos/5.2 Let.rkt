;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |5.2 Let|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui 

;;;;;;;;;;;;;;;;   Escolha a linguagem "Determine language from source"
;;
; ------------------------------------------------

(display "14 + 46 = ")
(let ((x 14) (y 46) (op +)) ;; Declarando x = 14, y = 46 e op = +
  (op x y)) ;; realizando a operação + 14 46 <=> 14 + 46 = 60
(newline)

(display "(37 + 93) - 17 = ")
(let ((x 37) (y 93) (z 17) (op1 +) (op2 -))
    (op2 (op1 x y) z))
(newline)