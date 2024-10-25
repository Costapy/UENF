;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-advanced-reader.ss" "lang")((modname |9.1 fatorial|) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #t #t none #f () #f)))
(define (fatorial n)
  (cond
    ((= n 0) 1)
    ((< n 0) "Não existe fatorial de número negativo.")
    (else (* n (fatorial (- n 1))))))

(fatorial 5)
