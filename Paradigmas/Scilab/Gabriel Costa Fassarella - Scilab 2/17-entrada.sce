// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto: Programacao: Formulario de Entrada de dados ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';    // Seu NOME aqui
Disciplina = 'PLP - CC - LCMAT - CCT - UENF 2023';
b = "    ";

itens=["Provas";"Exercicios";"Pesquisa"];

[ok,Provas,Exercicios,Pesquisa]=getvalue([Disciplina;'Ingresse as Notas Parciais :'], itens, list("vec",1,"vec",1,"vec",1), ["0.0";"0.0";"0.0"]);
media=mean([Provas,Exercicios,Pesquisa]);

if media > 5 then 
    mensagem ="Parabens! APROVADO!" ;
    else mensagem = "Infelizmente, voce foi REPROVADO";
end

messagebox([Disciplina;'A MEDIA FINAL é: '+string(media); b; mensagem], "UENF - "+Aluno);


