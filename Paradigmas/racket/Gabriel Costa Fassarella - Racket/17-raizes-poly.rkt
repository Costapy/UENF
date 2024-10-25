;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname 17-raizes-poly) (read-case-sensitive #t) (teachpacks ((lib "gui.rkt" "teachpack" "htdp"))) (htdp-settings #(#t constructor repeating-decimal #t #t none #f ((lib "gui.rkt" "teachpack" "htdp")) #f)))
;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023 
;; Aluno: Gabriel Costa Fassarella      <===========  seu nome aqui e abaixo
;;
  ;; define a linguagem default ===> Habilite Advanced Student
; ------------------------------------------------
(newline)
(display "  UENF-CCT-LCMAT-CC, 2023")
(newline)
(display "  Paradigmas de Linguagens de Programacao (Prof. Ausberto Castro)")
(newline)
(display "  Aluno:  Gabriel Costa Fassarella ")
(newline)
;;;
;;
;;  Aplicações:  raizes do polinomio Ax^2 + Bx + C = 0
;; ---------------------------------------------------

(define (poly2grau a b c)
  (cond 
    [(= a 0) "degenerada" ]
    [(< (* b b) 
        (* 4 a c)) 
     "Nenhuma Ou Complexa" ]
    [(= (* b b) 
        (* 4 a c)) 
     (/ (- b) (* 2 a))]
    [(> (* b b) 
        (* 4 a c)) 
     (list (/ (+ (- b) 
                 (sqrt (- (* b b) (* 4 a c)))) 
              (* 2 a)) 
           (/ (- (- b) 
                 (sqrt (- (* b b) (* 4 a c)))) 
              (* 2 a)))])) 

;;--------------------------------------
(newline)
;; EXEMPLOS 
;;(display "X^2 + 2X + 1 = 0 , Raizes = ")
;;(poly2grau 1 2 1) 
;;(display "deveria ser -1") 
;;(newline)

;;(display "3X^2 + 4X + 1 = 0 , Raizes = ")
;;(poly2grau 3 4 1) 
;;(display "deveria ser -1/3 -1")
;;(newline)

;;(newline)
;;(display "2X^2 + 4X + 3 = 0 , Raizes = ")
;;(poly2grau 2 4 3) 
;;(display "deveria ser Nenhuma")
;;(newline)

;;(newline)
;;(display "X^2 -1 = 0 , Raizes = ")
;;(poly2grau 1 0 -1) 
;;(display "deveria ser 1 e -1")
;;(newline)

;;(newline)
;;(display "2X^2 +4X +2 = 0 , Raizes = ")
;;(poly2grau 2 4 2) 
;;(display "deveria ser -1")
;;(newline)

;;(newline)
;;(display "X + 1 = 0 , Raizes = ")
;;(poly2grau 0 1 1) 
;;(display "deveria ser: Degenerada")
(newline)

(display "X^2 + 3X + 5, Raizes = ")
(poly2grau 1 3 5)
(newline)

(display "2X^2 + 6X -4, Raizes = ")
(poly2grau 2 6 -4)
(newline)

(display "3X -1, Raizes = ")
(poly2grau 0 3 -1)
(newline)

(display "X^2 + X + 2, Raizes = ")
(poly2grau 1 1 2)
(newline)

(display "X + 7, Raizes = ")
(poly2grau 0 1 7)
(newline)






