;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname 06-condicionalIF) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
;; Introdução à Linguagem Scheme-Racket
;; Prof. Ausberto S. Castro Vera       (ascv@uenf.br)
;; UENF-CCT-LCMAT - Curso de Ciencia da Computacao
;; 2023
;; Aluno:   Gabriel Costa Fassarella    <===========  escreva seu nome aqui

;;;;;;;;;;;;;;;;   Escolha a linguagem R5RS
;;
;; Ajuda:  http://docs.racket-lang.org/guide/syntax-overview.html#(part._.Conditionals_with_if__and__or__and_cond)
; ------------------------------------------------
(display "  UENF-CCT-LCMAT-CC, 2023")
(newline)
(display "  Paradigmas de Linguagens de Programacao (Prof. Ausberto Castro)")
(newline)
(display "  Aluno:  Gabriel Costa Fassarella ")
(newline)
;;
;;
;; Condicionais    (if  (condicao) (alternativa1) (alternativa2 ) )
;; ---------------------------------------------------

(define P 528)
(display "P = ")
(display P)
(newline)
(if (> P 57) 
    (display "P maior que 57")
    (display "P menor que 57")
    )
;;----------------------------

(define (reply s)
  (if (equal? "Oi" (substring s 0 2))
      "Tudo Bem?"
      "Nao entendi."))

;;----------------------------
(define quadrado
     (lambda ( a )    ; parametro formal
       ( * a a)
       )
  )
;;----------------------------
(newline)
(define minquadrado 
             (lambda (a b)   ; parametros formais
             (if (< a b) 
                         (quadrado a) 
                         (quadrado b) ) ) ) 

;;----------------------------

(display "MinQadrado de 6 e 9 = ") (minquadrado 6 9)
(newline)

(display "Oi pessoal da Computacao UENF! ")
(reply "Oi pessoal da Computacao UENF!")

(display "Vai chover na madrugada? ")
(reply "Vai chover na madrugada?")

