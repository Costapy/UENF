// Prof. Ausberto S. Castro Vera 
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Programacao: FUNCOES ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella' ;

printf('UENF - CCT - LCMAT - Ciencia da Computacao\n');

function fibo(n)
    a = 0
    b = 1
    
    res = 0
    for i = 2:n
        disp(a)
        res = a + b
        b = a
        a = res
    end
    disp(res)
endfunction

disp("Posicao: ")
pos = input("")
fibo(pos)
