// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Equacoes (Aplicacoes) ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';

Eq1 = "     2*Ax + (1/2)*By = C";
Eq2 = "     Dx - Ey = F";

Eq3 = "     -3*Ax + By = C";
Eq4 = "     5*Dx + Ey = F";


itens=["A"; "B";"C" ;"D";"E"; "F"];

[ok,a,b,c,d,e,f]=getvalue(['UENF - Prof. Ausberto S. Castro V. - 2023';'Sistema de Equações 1: ';  Eq1; Eq2; 'Sitema de Equações 2: '; Eq3; Eq4],...
                          itens,...
                          list("vec",1,"vec",1,"vec",1, "vec",1,"vec",1,"vec",1),...
                          ["2";"-3";"13";"1";"-1";"5"]  );
matrizcoef = [2*a (1/2)*b; d (-1)*e];              // matriz de coeficientes
vet = [c f]';                          // vetor coluna


k = det(matrizcoef);                   // determinante da matriz

if ( k == 0 ) then
   messagebox('O sistema não tem solução...')
   else
     solucao = inv(matrizcoef)*vet;    // calcula a solucao do sistema
     messagebox(['Solução:';
                 '     X = '+string(solucao(1)); ...
                 '     Y = '+string(solucao(2))],"UENF - ASCV", "info");
end;

matrizcoef = [(-3)*a b; (5)*d e];              // matriz de coeficientes
vet = [c f]';                          // vetor coluna


k = det(matrizcoef);                   // determinante da matriz

if ( k == 0 ) then
   messagebox('O sistema não tem solução...')
   else
     solucao = inv(matrizcoef)*vet;    // calcula a solucao do sistema
     messagebox(['Solução:';
                 '     X = '+string(solucao(1)); ...
                 '     Y = '+string(solucao(2))],"UENF - ASCV", "info");
end;





