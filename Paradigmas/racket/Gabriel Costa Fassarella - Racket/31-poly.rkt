;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname 31-poly) (read-case-sensitive #t) (teachpacks ((lib "matrix.ss" "teachpack" "htdp"))) (htdp-settings #(#t constructor repeating-decimal #t #t none #f ((lib "matrix.ss" "teachpack" "htdp")) #f)))
;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Language: "Essentials of Programming Language"
;;
;;  Aplicações:  raizes do polinomio Ax^2 + Bx + C = 0
;; ---------------------------------------------------



(define poly2grau
  (lambda (a b c) 
  (cond 
    [(= a 0) 'degenerada]
    [(< (* b b) 
        (* 4 a c)) 
     'NenhumaOuComplexa]
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
              (* 2 a)))])
    ) )


;;--------------------------------------
(newline)
(display "UENF 2023, Paradigmas de Linguagens de Programacao")
(newline)
(display "Aluno:  X e Y ")
(newline)

(newline)
;; EXEMPLO e Testes 
(display "X^2 + 2X + 1 = 0 , Raizes = ")
(poly2grau 1 2 1) 
(display "deveria ser -1") 
(newline)

(display "3X^2 + 4X + 1 = 0 , Raizes = ")
(poly2grau 3 4 1) 
(display "deveria ser -1/3 -1")
(newline)

(newline)
(display "2X^2 + 4X + 3 = 0 , Raizes = ")
(poly2grau 2 4 3) 
(display "deberia ser Nenhuma")
(newline)

(newline)
(display "X^2 -1 = 0 , Raizes = ")
(poly2grau 1 0 -1) 
(display "deveria ser 1 e -1")
(newline)

(newline)
(display "2X^2 +4X +2 = 0 , Raizes = ")
(poly2grau 2 4 2) 
(display "deveria ser -1")
(newline)

(newline)
(display "X + 1 = 0 , Raizes = ")
(poly2grau 0 1 1) 
(display "deveria ser: Degenerada")
(newline)

(newline)
(display "Nova Equacao ... A B C: ")
(define X (read))
(define Y (read))
(define Z (read))

(poly2grau X Y Z)
; (poly2grau 1 1 -2)