;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |10.1 cond|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; Abril 2023
;; Aluno: Gabriel Costa Fassarella     <===========  escreva seu nome aqui
;;
;; #lang racket      ;; define a linguagem default
; ------------------------------------------------

(define (verif-num valor)
  (cond 
    ((< valor 0) "Valor é menor que zero")
    ((= valor 0) "O numéro é igual a 0")
    ((and (> valor 0) (< valor 50)) "O número é menor que 50")
    ((and (>= valor 10) (< valor 50)) "Valor se encontra entre 10 e 50")
    ((>= valor 50) "O número é maior ou igual a 50")
    (else "Valor inválido")))

(verif-num 15)


