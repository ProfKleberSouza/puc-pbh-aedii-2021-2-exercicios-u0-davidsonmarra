#include <stdio.h>

int main() {
   // ENTRADAS: os 3 lados de um triangulo
   int x, y, z;
   scanf("%i %i %i", &x, &y, &z);

   // PROCESSAMENTO
   if(x + y < z || x + z < y || y + z < x || x <= 0 || y <= 0 || z <= 0) 
      printf("OS LADOS NAO FORMAM UM TRIANGULO"); // SAIDA
   else if(x == y && x == z) 
      printf("TRIANGULO EQUILATERO"); // SAIDA
   else if(x == y || x == z || y == z)
      printf("TRIANGULO ISOSCELES"); // SAIDA
   else
      printf("TRIANGULO ESCALENO"); // SAIDA 
   return 0;
}