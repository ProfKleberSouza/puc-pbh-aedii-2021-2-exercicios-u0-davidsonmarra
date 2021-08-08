#include <stdio.h>

int main() {
   // ENTRADAS: tres numeros inteiros quaisquer
   int a, b, c;
   scanf("%i %i %i", &a, &b, &c);

   // PROCESSAMENTO: qual o maior e o menor dos 3 numeros
   int maior, menor; 
   if(a >= b) { // if para calcular o maior
      if(a >= c)
         maior = a;
      else
         maior = c;
   }else if(b >= a) {
      if(b >= c) 
         maior = b;
      else
         maior = c; 
   }

   if(a <= b) { // if para calcular o menor
      if(a <= c)
         menor = a;
      else
         menor = c;
   }else if(b <= a) {
      if(b <= c) 
         menor = b;
      else
         menor = c; 
   }

   // SAIDA
   printf("MENOR = %i\nMAIOR = %i", menor, maior);
   return 0;
}