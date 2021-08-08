#include <stdio.h>

int main() {
   // ENTRADAS: um numero inteiro N 
   int N;
   scanf("%i", &N);
   int aux; 
   scanf("%i", &aux); 
   int maior = aux, menor = aux;
   for(int i = 0; i < N - 1; i++) {
      scanf("%i", &aux);
      aux > maior ? maior = aux : ""; // PROCESSAMENTO
      aux < menor ? menor = aux : ""; // PROCESSAMENTO
   }

   // SAIDA
   printf("MENOR = %i\nMAIOR = %i", menor, maior);
   return 0;
}