#include <stdio.h>

// Leia as notas de 5 alunos e:
// 1. Calcule a média com uma função que recebe um ponteiro para o vetor.
// 2. Mostre quais alunos estão aprovados (nota ≥ média).
// 3. Exiba a média geral.
// 4. O exercício deve conter estrutura de repetição, if else ou switch, função e ponteiro

// Digite a nota do aluno 1: 7.5
// Digite a nota do aluno 2: 6.0
// Digite a nota do aluno 3: 8.0
// Digite a nota do aluno 4: 5.5
// Digite a nota do aluno 5: 9.0
// Média das notas: 7.2
// Aluno 1: Aprovado
// Aluno 2: Reprovado
// Aluno 3: Aprovado
// Aluno 4: Reprovado
// Aluno 5: Aprovado

  double mediaAlunos(double v[], int tamanho){
    int i;
    double media = 0;
    for(i = 0; i < tamanho; i++){
      media += v[i];
    }
    return media / tamanho;
  }

int main(){

  double notasAlunos[5];
  int i, tamanhoNotasAlunos, mediaProvas;
  tamanhoNotasAlunos = sizeof(notasAlunos) / sizeof(notasAlunos[0]);

  for(i = 0; i < tamanhoNotasAlunos; i++){
    printf("Digite a nota do %d aluno: ", i + 1);
    scanf("%lf", &notasAlunos[i]);
  }

  double media;
  media = mediaAlunos(notasAlunos, tamanhoNotasAlunos);
  printf("A media eh: %.1f\n", media);

  for(i = 0; i < tamanhoNotasAlunos; i++){
    if(notasAlunos[i] >= media){
      printf("Aluno %d: Aprovado\n", i + 1);
    }
    else {
      printf("Aluno %d: Reprovado\n", i + 1);
    }
  }

  return 0;
}