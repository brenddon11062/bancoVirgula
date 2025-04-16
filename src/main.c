#include <stdio.h>
#include "utils/menu.h"
#include <stdlib.h>
#include <string.h>

#define ARQUIVO_BANCO "../data/usuarios.txt"

void cadastrarUsuario() {
  // id, nome, saldo, limite
    int id;
    char nome[100];
    double saldo; 
    double limite;

    // printf("Digite seu nome: ");


    // captura de dados
    printf("Digite seu nome: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = 0;

    // limpar buffer
    // getchar();

    printf("Digite seu id: ");
    scanf("%d", &id);
    printf("Digite seu saldo: ");
    scanf("%lf", &saldo);
    printf("Digite seu limite: ");
    scanf("%lf", &limite);

    printf("Dados do usuário: \n");
    printf("ID: %d\n", id);
    printf("Nome: %s\n", nome);
    printf("Saldo: %.2lf\n", saldo);
    printf("Limite: %.2lf\n", limite);

    FILE *arquivo = fopen(ARQUIVO_BANCO, "a");

    if (arquivo == NULL) {
      printf("Erro! Não foi possível abrir o arquivo.\n");
      return ;
  }
    fprintf(arquivo, "%d;%s;%.2lf;%.2lf\n", id, nome, saldo, limite);

    printf("Usuário cadastrado com sucesso.\n\n");
}

int main() {

  // menuInteracao();




  cadastrarUsuario();

  return 0;

}