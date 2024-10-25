// Prof. Ausberto S. Castro Vera 
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Programacao: FOR ==================

clc;    
mprintf("UENF - Ciencia da Computacao\n");
printf(" Aluno: Gabriel Costa Fassarella - Campos %s\n", date());

//----------- incremento sequencial ------------
for N=2:6:29
  printf(" N= %d\n", N);
end

//----------- incremento vetorial ------------ 
for   v  =  [2  4  9]
    x = 3 + v;
    y = 10 * v;
    z = 21 - v;
    vet = [x y z];
    printf("X=%d  Y=%d  Z=%d   ==> Maximo=%d  minimo=%d\n",x,y,z,max(vet), min(vet));
end

//----------- incremento decimal ------------
j=1;
for k = 1:0.8:5
         A(1,j) = k;
         A(2,j) =  10* k;
         
         B(k,j) =  100* k;    // indice somente parte inteira     
         j=j+1;
end;
A
B
//----------- incremento Matricial ------------

for k = [ 1 2 3 4; 10 20 30 40; 100 200 300 400],
    Col = k,
end;

