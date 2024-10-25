// Prof. Ausberto S. Castro Vera 
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Programacao:  IF-THEN-ELSE ================

clc;
mprintf("\n UENF-CCT-LCMAT-Ciencia da Computacao\n");
printf(" Aluno: Gabriel Costa Fassarella - Campos %s\n\n", date());

i=1;
for j = 1:3, 
  if i == j then
        V(i,j) = 2
      elseif abs(i-j) == 1 then 
          V(i,j) = i-j
          else V(i,j) = i+j
   end,    // do if
   mprintf(" V(%d,%d) = %d\n",i,j,V(i,j))
end   // do for  

//-------------------------------------------   
valor = input('Digite um número qualquer : ')
if  valor < 45
   a = valor + 45;
   b = 45 - valor;
   disp( 'O valor digitado foi MENOR que 45')
   mprintf("\n a = %d (valor+45) \n b = %d (45-valor)\n", a, b)
end

if  valor > 45
   a = valor + 50;87
   b = 50-valor;
   disp('O valor digitado foi MAIOR que 45')
   mprintf("\n a = %d (valor+50) \n b = %d (50-valor)\n", a, b)
end

disp('Execucao terminada...');
