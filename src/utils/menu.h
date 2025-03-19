#include <stdio.h>

int menuIteracao() {
  char opcao;

  do {
    // codigo para ser repetido
    printf("\n\tDigite a opção desejada:\n\t\ts: Verificar saldo;\n\t\tc: Verificar conta;\n\t\tl: Sair.\n\t\tOpção:");
    scanf("%c", &opcao);

    switch (opcao){
      case 's':
        printf("\nVerificando saldo...\n");
        break;
      case 'c':
        printf("\nVerificando conta...\n");
        break;
      case 'l':
        printf("\nSaindo do menu...\n");
        break;
      default :
        printf("\nOpção %c Inválida.\n", opcao);
    }

    if (opcao == 'l'){
      break;
    }
    
  } while (1);
  
  return 0;
}