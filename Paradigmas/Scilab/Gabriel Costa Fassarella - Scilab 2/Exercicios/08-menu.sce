// Prof. Ausberto S. Castro Vera 
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Programacao:  IF-THEN-ELSE ================

clc;
mprintf("\n UENF-CCT-LCMAT-Ciencia da Computacao\n");
printf(" Aluno: Gabriel Costa Fassarella - Campos %s\n\n", date());

op = 0
while op ~= 999
    res = 0
    disp("1 Valor: ")
    n1 = input("")
    disp("2 Valor: ")
    n2 = input("")

    disp("[1] Soma")
    disp("[2] Produto")
    disp("[3] Divisao")
    disp("[4] Subtracao")

    disp("Opcao [999 para parar]: ")
    op = input("")
    
    if op == 1 then
        res = n1 + n2
        
    elseif op == 2 then
        res = n1 * n2
    
    elseif op == 3 then
        res = n1 / n2
    elseif op == 999 then
        break
    else res = n1 - n2
    end
    disp("Resultado = ", res)
end
