;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |8.2 media|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno:   Gabriel Costa Fassarella    <===========  escreva seu nome aqui

;;;;;;;;;;;;;;;;   Escolha a linguagem R5RS
;;
;; Ajuda:  http://docs.racket-lang.org/guide/syntax-overview.html#(part._.Conditionals_with_if__and__or__and_cond)
; -------------------------------------------------------

(define media
  (lambda (p1 p2 p3)
    (begin
      (if (>= (/ (+ (+ p1 p2) p3) 3) 6)
          (display "Aprovado")
          (display "Reprovado")
          )
      )
  )
 )

(media 3 6 9)
(newline)
(media 6 2 4)