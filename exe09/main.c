#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

struct Alunos {
   char nome[50];
   float nota;
};

/* Descricao: procedimento que preenche o vetor de alunos e calcula a media das notas
Entradas: o vetor de struct alunos, o numero inteiro de posicoes do vetor e o endereco da variavel que armazenara a media das notas 
Saidas: o vetor preenchido e a media retornada por referencia */
void preencheVetor(struct Alunos alunos[], int n, float * media) {
   float aux = 0;
   for(int i = 0; i < n; i++) {
      scanf("%s %f", &alunos[i].nome, &alunos[i].nota);
      aux += alunos[i].nota;
   }
   * media = aux / N;
}

/* Descricao: procedimento que preenche o vetor maiores com os 3 alunos que tiveram a maior nota
Entradas: vetor de struct alunos já preenchido, vetor de struct de maiores notas vazio, e a quantidade de alunos
Saida: vetor de maiores preenchido com os 3 alunos que tiveram as maiores notas */
void melhoresAlunos(struct Alunos alunos[], struct Alunos maiores[], int n) {
   int i, j, menorIndex = 0;
   for(i = 0; i < 3; i++) { // inicializa o vetor com as primeiras notas do vetor de alunos
      maiores[i].nota = alunos[i].nota;
      strcpy(maiores[i].nome, alunos[i].nome);
   }
   for(i = 3; i < n; i++) {
      for(j = 0; j < 3; j++) 
         if(maiores[menorIndex].nota > maiores[j].nota)
            menorIndex = j;
      if(alunos[i].nota > maiores[menorIndex].nota) {
         strcpy(maiores[menorIndex].nome, alunos[i].nome);
         maiores[menorIndex].nota = alunos[i].nota;
      }   
   }
}

/* Descricao: procedimento que printa os 3 melhores alunos em ordem alfabetica
Entradas: vetor de struct de maiores notas preenchido
Saida: nome e nota dos 3 melhores alunos em ordem alfabetica */
void ordemAlfabetica(struct Alunos maiores[]) {
   if(strcmp(maiores[0].nome, maiores[1].nome) < 0 && strcmp(maiores[0].nome, maiores[2].nome) < 0) {
      printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
      if(strcmp(maiores[1].nome, maiores[2].nome) < 0) {
         printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
         printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
      }
      else {
         printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
         printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
      }
   }
   else if(strcmp(maiores[1].nome, maiores[0].nome) < 0 && strcmp(maiores[1].nome, maiores[2].nome) < 0) {
      printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
      if(strcmp(maiores[0].nome, maiores[2].nome) < 0) {
         printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
         printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
      }
      else {
         printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
         printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
      }
   }
   else {
      printf("%s %.1f\n", maiores[2].nome, maiores[2].nota);
      if(strcmp(maiores[0].nome, maiores[1].nome) < 0) {
         printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
         printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
      }
      else {
         printf("%s %.1f\n", maiores[1].nome, maiores[1].nota);
         printf("%s %.1f\n", maiores[0].nome, maiores[0].nota);
      }
   }


}

int main() {
   // ENTRADAS: o numero de alunos, o nome dos alunos e a nota deles
   int n;
   float media;
   scanf("%i", &n);
   struct Alunos vetAlunos[N], maiores[3]; // cria um vetor de alunos de N posicoes e um vetor para guardar os 3 melhores alunos

   // PROCESSAMENTO
   preencheVetor(vetAlunos, n, &media); // o vetor eh preenchido
   melhoresAlunos(vetAlunos, maiores, n); // filtra os 3 maiores notas
   printf("NOTA MEDIA = %.1f\n", media); // SAIDA
   ordemAlfabetica(maiores); // printa na tela em ordem alfabetica
   return 0;
}