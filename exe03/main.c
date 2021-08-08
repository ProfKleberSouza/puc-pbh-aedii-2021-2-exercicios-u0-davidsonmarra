#include <stdio.h>

int main() {
   // ENTRADAS: um numero
   int n;
   scanf("%i", &n);
   
   // PROCESSAMENTO: se um numero n eh par ou impar e positivo ou negativo
   if(n == 0) // numero igual a 0
      printf("NUMERO NEUTRO"); // SAIDA
   else if(n % 2 == 0) // numero par 
      n > 0 ? printf("NUMERO PAR POSITIVO") : printf("NUMERO PAR NEGATIVO"); // SAIDA
   else // n % 2 != 0 => numero impar
      n > 0 ? printf("NUMERO IMPAR POSITIVO") : printf("NUMERO IMPAR NEGATIVO"); // SAIDA
   return 0;
}