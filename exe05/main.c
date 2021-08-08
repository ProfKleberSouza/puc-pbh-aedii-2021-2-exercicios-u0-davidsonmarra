#include <stdio.h>

int main() {
   // ENTRADAS: 4 notas no formato de numero inteiro
   int n1, n2, n3, n4;
   scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

   // PROCESSAMENTO: media das notas com 1 casa decimal
   float media;
   printf("NOTA = "); // SAIDA
   media = (n1 + n2 + n3 + n4) / 4.0; // calcula a media

   // SAIDA
   media >= 6 
   ? printf("%.1f (APROVADO)", media) // se a media for maior ou igual a 6
   : printf("%.1f (REPROVADO)", media); // se a media for menor que 6
   return 0;
}