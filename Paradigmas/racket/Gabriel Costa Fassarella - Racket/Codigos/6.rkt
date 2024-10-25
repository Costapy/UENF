;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |6|) (read-case-sensitive #t) (teachpacks ((lib "gui.rkt" "teachpack" "htdp"))) (htdp-settings #(#t constructor repeating-decimal #t #t none #f ((lib "gui.rkt" "teachpack" "htdp")) #f)))
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno: Gabriel Costa Fassarella      <===========  escreva seu nome aqui 

;;;;;;;;;;;;;;;;   Escolha a linguagem "Determine language from source"
;;
;#lang racket      ;; define a linguagem default
; ------------------------------------------------racket

(define lista (list 1 2 3 4 5)) 

(define verif
  (lambda (x lista)
    (member? x lista))) 

(display (verif 3 lista))
(newline)
(display (verif 6 lista))