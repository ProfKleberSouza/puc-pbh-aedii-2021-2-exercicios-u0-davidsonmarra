#include <stdio.h>

int main() {
   // ENTRADAS: tempo, velocidade media e rendimento
   int t, v, r;

   // PROCESSAMENTO
   scanf("%i %i %i", &t, &v, &r);
   int d = v * t;
   int l = d / r;

   // SAIDAS
   printf("R = %i\nV = %i\nT = %i\nD = %i\nL = %i", r, v, t, d, l);
   return 0;
}