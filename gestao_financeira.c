/*
  Programa para facilitar a contabilidade
  Projeto criado por Pedro Almeida
  1° Sem Eng. de Computação - IESB
  Início em: 18/05/2023
  https://miro.com/app/board/uXjVM8MNYFo=/
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

  int opcao_menu = 0;
  int opcao_menu_caso_um = 0;
  int deu_certo = 0;

  // menu principal
  while (1) {

    system("clear");
    printf("***************** BEM-VINDO *****************\n\n");
    printf("******* Escolha uma das opções abaixo *******\n\n");
    printf("1 - Incluir dados no balanço financeiro\n");
    printf("2 - Imprimir relatório\n");
    printf("0 - Fechar Programa\n\n-> ");
    deu_certo = scanf("%i", &opcao_menu);
    getchar();

    // switch menu principal
    switch (opcao_menu) {
    
    // fechar programa  
    case 0: {
      break;
    }

    // menu balanço financeiro
    case 1: {

      printf("************* BALANÇO FINANCEIRO *************\n\n");
      printf("\n");
      printf("Selecione o tipo de transação:\n");
      printf("1 - Crédito\n");
      printf("2 - Débito\n");
      printf("3 - Extorno\n");
      printf("0 - Retornar ao menu principal\n\n-> ");
      deu_certo = scanf("%i", &opcao_menu_caso_um);
      getchar();

      while (1) {

        switch (opcao_menu) {

        case 0: {
          break;
        }

        // transação de crédito
        case 1: {

          printf("******* INSERINDO TRANSAÇÃO DE CRÉDITO *******\n\n");
          printf("Insira o valor\n-> R$");
          break;
        }

        // transação de débito
        case 2: {

          printf("******* INSERINDO TRANSAÇÃO DE DÉBITO *******\n\n");
          printf("Insira o valor\n-> R$");
          break;
          
        }

        // extorno
        case 3: {
          
          printf("************ INSERINDO EXTORNO ************\n\n");
          printf("Insira o valor\n-> R$");
          break;
          
        }

        default: {
          
          printf("vc digitou uma opcao errada\n\n");
          break;
          
        }
        }

        printf("\n\nPressione ENTER para continuar...");
        getchar();
        break;
      }

      break;
    }

    // menu impressão do relatório
    case 2: {

      printf("tela de impressão\n\n");
      break;
    }

    default: {
      printf("vc digitou uma opcao errada\n\n");
      break;
    }
    }

    printf("\n\nPressione ENTER para continuar...");
    getchar();
  }

  return 0;
}
