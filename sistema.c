#include <stdio.h>

int main() {
    printf("Sistema de Cadastro de Livros\n");

int codigo[20];
    char titulo[20][50];
    char autor[20][50];
    int ano[20];

    int total = 0;
    int opcao;
    int i;

    do {
        printf("\n===== CADASTRO DE LIVROS =====");
        printf("\n1 - Cadastrar");
        printf("\n2 - Consultar");
        printf("\n3 - Listar");
        printf("\n4 - Alterar");
        printf("\n5 - Excluir");
        printf("\n0 - Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
             case 1:
                if (total == 20) {
                    printf("\nLimite maximo de cadastros atingido.\n");
                } else {
                    printf("\nCodigo: ");
                    scanf("%d", &codigo[total]);
                    printf("Titulo (use _ no lugar dos espacos): ");
                    scanf("%s", titulo[total]);
                    printf("Autor (use _ no lugar dos espacos): ");
                    scanf("%s", autor[total]);
                    printf("Ano: ");
                    scanf("%d", &ano[total]);

                    total++;

                    printf("\nLivro cadastrado com sucesso!\n");
                    printf("Total de livros cadastrados: %d\n", total);
                }
                break;
            case 2:
                printf("\nConsultar\n");
                break;
            case 3:
                if (total == 0) {
                    printf("\nNenhum registro cadastrado.\n");
                } else {
                    for (i = 0; i < total; i++) {
                        printf("\nCodigo: %d", codigo[i]);
                        printf("\nTitulo: %s", titulo[i]);
                        printf("\nAutor: %s", autor[i]);
                        printf("\nAno: %d\n", ano[i]);
                    }
                }
                break;
            case 4:
                printf("\nAlterar\n");
                break;
            case 5:
                printf("\nExcluir\n");
                break;
            case 0:
                printf("\nEncerrando o sistema...\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}

