#include <stdio.h>

int main() {
   // ENTRADAS: 10 numeros
   int n[10], i;
   for(i = 0; i < 10; i++) 
      scanf("%i", &n[i]);

   // PROCESSAMENTO   
   for(i = 9; i >= 0; i--)
      printf("%i\n", n[i]); // SAIDA
   
   return 0;
}