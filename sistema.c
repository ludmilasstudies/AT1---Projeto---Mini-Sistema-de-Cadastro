#include <stdio.h>

int main() {
    printf("Sistema de Cadastro de Livros\n");

int codigo[20];
    char titulo[20][50];
    char autor[20][50];
    int ano[20];

    int total = 0;
    int opcao;
    int i, j;
    int codigoBusca;
    int posicao;

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
                 printf("\nInforme o codigo do livro: ");
                scanf("%d", &codigoBusca);

                posicao = -1;
                for (i = 0; i < total; i++) {
                    if (codigo[i] == codigoBusca) {
                        posicao = i;
                    }
                }

                if (posicao == -1) {
                    printf("\nRegistro nao encontrado.\n");
                } else {
                    printf("\nCodigo: %d", codigo[posicao]);
                    printf("\nTitulo: %s", titulo[posicao]);
                    printf("\nAutor: %s", autor[posicao]);
                    printf("\nAno: %d\n", ano[posicao]);
                }
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
                printf("\nInforme o codigo do livro a alterar: ");
                scanf("%d", &codigoBusca);

                posicao = -1;
                for (i = 0; i < total; i++) {
                    if (codigo[i] == codigoBusca) {
                        posicao = i;
                    }
                }

                if (posicao == -1) {
                    printf("\nRegistro nao encontrado.\n");
                } else {
                    printf("Novo titulo (use _ no lugar dos espacos): ");
                    scanf("%s", titulo[posicao]);
                    printf("Novo autor (use _ no lugar dos espacos): ");
                    scanf("%s", autor[posicao]);
                    printf("Novo ano: ");
                    scanf("%d", &ano[posicao]);

                    printf("\nLivro alterado com sucesso!\n");
                }
                break;
            case 5:
                printf("\nInforme o codigo do livro a excluir: ");
                scanf("%d", &codigoBusca);

                posicao = -1;
                for (i = 0; i < total; i++) {
                    if (codigo[i] == codigoBusca) {
                        posicao = i;
                    }
                }

                if (posicao == -1) {
                    printf("\nNao foi possivel excluir.\n");
                } else {
                    for (i = posicao; i < total - 1; i++) {
                        codigo[i] = codigo[i + 1];
                        ano[i] = ano[i + 1];

                        for (j = 0; j < 50; j++) {
                            titulo[i][j] = titulo[i + 1][j];
                            autor[i][j] = autor[i + 1][j];
                        }
                    }

                    total--;

                    printf("\nLivro excluido com sucesso!\n");
                }
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

