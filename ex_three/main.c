#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Jogo de Adivinhação com Tentativas
// 1- O computador sorteia um número de 1 a 100.
// 2- O usuário tenta adivinhar o número digitando tentativas.
// 3- A cada tentativa:
// 4- O programa indica se o número digitado é maior ou menor que o sorteado.
// 5- O programa deve parar quando o usuário acerta.
// 6- O exercício deve conter estrutura de repetição, if else ou switch, função e ponteiro

// Digite seu palpite: 50
// Muito alto!
// Digite seu palpite: 30
// Muito baixo!
// Digite seu palpite: 42
// Parabéns! Você acertou em 3 tentativas.
int tentativas = 0;

int gerarNumeroInteiroAleatorio(int *numero, int numeroLimite){
  srand(time(NULL));
  *numero = (rand() % numeroLimite) + 1;
  
}

int main(){
  int numeroSorteio, tentativaUsuario;
  int acertou = 0;
  gerarNumeroInteiroAleatorio(&numeroSorteio, 100);
  while (acertou == 0){
    printf("Digite seu palpite: ");
    scanf("%d", &tentativaUsuario);
    if(tentativaUsuario == numeroSorteio){
      tentativas ++;
      printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
      acertou = 1;
    } 
    else if (tentativaUsuario > numeroSorteio){
      printf("Muito Alto!\n");
    } 
    else if(tentativaUsuario < numeroSorteio){
      printf("Muito baixo!\n");
    } 
    else{
      printf("Numero nao identificado\n");
    }
    tentativas ++;
  }

  return 0;
}