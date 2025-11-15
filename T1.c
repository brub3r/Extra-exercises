#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt-BR");

    int continuar = 0;
    int menu = 0;
    int matdisp = 5;
    int matvendido = 5;
    int matcodigo = 1;
    float valormat = 150.00;
    int probdisp = 10;
    int probvendido = 0;
    int probcodigo = 2;
    float valorprob = 100.00;
    int fisdisp = 8;
    int fisvendido = 2;
    int fiscodigo = 3;
    float valorfis = 160.00;
    int quimdisp = 7;
    int quimvendido = 3;
    int quimcodigo = 4;
    float valorquim = 160.00;
    int compdisp = 1;
    int compvendido = 9;
    int compcodigo = 5;
    float valorcomp = 200.00;
    int categoria;
    int qtde;
    int efetuar_compra;
    int total_vendidos = 0;
    float valor_total;
    char caractere;

    printf("       .--.                   .---.   \n");
    printf("   .---|__|           .-.     |~~~|\n");
    printf(".--|===|--|_          |_|     |~~~|--.\n");
    printf("|  |===|  |'\\     .---!~|  .--|   |--|\n");
    printf("|  |   |  |.'\\    |===| |--|  |   |  |\n");
    printf("|  |   |  |\\.'\\   |   | |__|  |   |  |\n");
    printf("|  |   |  | \\  \\  |===| |==|  |   |  |\n");
    printf("|  |   |__|  \\.'\\ |   |_|__|  |~~~|__|\n");
    printf("|  |===|--|   \\.'\\|===|~|--|  |~~~|--|\n");
    printf("^--^---'--^    `-'`---^-^--^--^---'--'\n");
    printf("\n");

    while (menu != 5)
    {

        printf(" .......................................\n");
        printf("{  |  1  |  Total de Unidades      | |  }\n");
        printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
        printf("{  |  2  |  Mostrar Descrição      | |  }\n");
        printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
        printf("{  |  3  |  Comprar Livros         | |  }\n");
        printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
        printf("{  |  4  |  Total Vendidos         | |  }\n");
        printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
        printf("{  |  5  |  Encerrar               | |  }\n");
        printf(" ---------------------------------------\n");

        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("\t\t\t\t Disponivel \t\t Vendido \t\t Codigo \t\t Valor\n");
            printf("Matematica\t\t\t %d \t\t\t %d\t\t\t\t%d \t\t RS$%.2f\n", matdisp, matvendido, matcodigo, valormat);
            printf("Probabilidade e estatistica \t %d \t\t\t %d\t\t\t\t%d \t\t RS$%.2f\n", probdisp, probvendido, probcodigo, valorprob);
            printf("Fisica\t\t\t\t %d \t\t\t %d\t\t\t\t%d \t\t RS$%.2f\n", fisdisp, fisvendido, fiscodigo, valorfis);
            printf("Quimica\t\t\t\t %d \t\t\t %d\t\t\t\t%d \t\t RS$%.2f\n", quimdisp, quimvendido, quimcodigo, valorquim);
            printf("Computação\t\t\t %d \t\t\t %d\t\t\t\t%d \t\t RS$%.2f\n", compdisp, compvendido, compcodigo, valorcomp);

            printf("Digite 0 para continuar \n");
            scanf("%d", &continuar);
            break;

        case 2:
            printf("Qual categoria?\n");
            printf(" .............................\n");
            printf("{  |  1  |  Matemática    | |  }\n");
            printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
            printf("{  |  2  |  Probabilidade e Estatistica   | |  }\n");
            printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
            printf("{  |  3  |  Fisica        | |  }\n");
            printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
            printf("{  |  4  |  Quimica         | |  }\n");
            printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
            printf("{  |  5  |  Computação           | | }\n");
            printf("--------------------------------------\n");

            scanf("%d", &categoria);
            while (categoria < 1 || categoria > 5)
            {
                printf("Digite um valor válido\n");
                scanf("%d", &categoria);
            }

            if (categoria == 1)
            {
                FILE *arq = fopen("..\\matematica.txt", "r");

                while ((caractere = fgetc(arq)) != EOF)
                {
                    printf("%c", caractere);
                }

                fclose(arq);
            }
            else if (categoria == 2)
            {
                 FILE *arq = fopen("..\\prob.txt", "r");

                while ((caractere = fgetc(arq)) != EOF)
                {
                    printf("%c", caractere);
                }

                fclose(arq);
            }
            else if (categoria == 3)
            {
                 FILE *arq = fopen("..\\fisica.txt", "r");

                while ((caractere = fgetc(arq)) != EOF)
                {
                    printf("%c", caractere);
                }

                fclose(arq);
            }
            else if (categoria == 4)
            {
                 FILE *arq = fopen("..\\quimica.txt", "r");

                while ((caractere = fgetc(arq)) != EOF)
                {
                    printf("%c", caractere);
                }

                fclose(arq);
            }
            else if (categoria == 5)
            {
                  FILE *arq = fopen("..\\computacao.txt", "r");

                while ((caractere = fgetc(arq)) != EOF)
                {
                    printf("%c", caractere);
                }

                fclose(arq);
            }
            printf("\nDigite 0 para continuar\n");
            scanf("%d", &continuar);
            break;

        case 3:
            printf("Qual categoria?\n");
            printf(" .............................\n");
            printf("{  |  1  |  Matemática    | |  }\n");
            printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
            printf("{  |  2  |  Probabilidade e Estatistica   | |  }\n");
            printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
            printf("{  |  3  |  Fisica        | |  }\n");
            printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
            printf("{  |  4  |  Quimica         | |  }\n");
            printf(" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
            printf("{  |  5  |  Computação           | | }\n");
            printf("--------------------------------------\n");

            scanf("%d", &categoria);
            while (categoria < 1 || categoria > 5)
            {
                printf("Digite um valor válido\n");
                scanf("%d", &categoria);
            }

            if (categoria == 1)
            {
                printf("Quantidade disponivel: %d\n", matdisp);
                printf("Quantidade que deseja comprar: \n");
                scanf("%d", &qtde);

                if (qtde > matdisp || matdisp == 0)
                {
                    printf("Não disponivel\n");
                }
                else
                {
                    printf("Valor a pagar: %.2f\n", valormat * qtde);
                    printf("Efetuar compra? 1. SIM || 2 - NÃO\n");
                    scanf("%d", &efetuar_compra);
                    if (efetuar_compra == 1)
                    {
                        matdisp = matdisp - qtde;
                        matvendido = matvendido + qtde;
                    }
                }
            }
            else if (categoria == 2)
            {
                printf("Quantidade disponivel: %d\n", probdisp);
                printf("Quantidade que deseja comprar: \n");
                scanf("%d", &qtde);
                if (qtde > probdisp || probdisp == 0)
                {
                    printf("Não disponivel\n");
                }
                else
                {
                    printf("Valor a pagar: %.2f\n", valorprob * qtde);
                    printf("Efetuar compra? 1- SIM || 2 - NÃO\n");
                    scanf("%d", &efetuar_compra);
                    if (efetuar_compra == 1)
                    {
                        probdisp = probdisp - qtde;
                        probvendido = probvendido + qtde;
                    }
                }
            }
            else if (categoria == 3)
            {
                printf("Quantidade disponivel: %d\n", fisdisp);
                printf("Quantidade que deseja comprar: \n");
                scanf("%d", &qtde);
                if (qtde > fisdisp || fisdisp == 0)
                {
                    printf("Não disponivel\n");
                }
                else
                {
                    printf("Valor a pagar: %.2f\n", valorfis * qtde);
                    printf("Efetuar compra? 1- SIM || 2- NÃO\n");
                    scanf("%d", &efetuar_compra);
                    if (efetuar_compra == 1)
                    {
                        fisdisp = fisdisp - qtde;
                        fisvendido = fisvendido + qtde;
                    }
                }
            }
            else if (categoria == 4)
            {
                printf("Quantidade disponivel: %d\n", quimdisp);
                printf("Quantidade que deseja comprar: \n");
                scanf("%d", &qtde);
                if (qtde > quimdisp || quimdisp == 0)
                {
                    printf("Não disponivel\n");
                }
                else
                {
                    printf("Valor a pagar: %.2f\n", valorquim * qtde);
                    printf("Efetuar compra? 1- SIM || 2- NÃO\n");
                    scanf("%d", &efetuar_compra);
                    if (efetuar_compra == 1)
                    {
                        quimdisp = quimdisp - qtde;
                        quimvendido = quimvendido + qtde;
                    }
                }
            }
            else if (categoria == 5)
            {
                printf("Quantidade disponivel: %d\n", compdisp);
                printf("Quantidade que deseja comprar: \n");
                scanf("%d", &qtde);
                if (qtde > compdisp || compdisp == 0)
                {
                    printf("Não disponivel\n");
                }
                else
                {
                    printf("Valor a pagar: %.2f\n", valorcomp * qtde);
                    printf("Efetuar compra? 1- SIM || 2- NÃO\n");
                    scanf("%d", &efetuar_compra);
                    if (efetuar_compra == 1)
                    {
                        compdisp = compdisp - qtde;
                        compvendido = compvendido + qtde;
                    }
                }
                printf("Digite 0 para continuar \n");
                scanf("%d", &continuar);
                break;

            case 4:
                printf("=================================\n");
                printf("Total de livros vendidos: \n");
                total_vendidos = matvendido + fisvendido + quimvendido + compvendido + probvendido;
                printf("...............................%d\n", total_vendidos);
                printf("Valor total:\n");
                valor_total = (valormat * matvendido) + (valorprob * probvendido) + (valorfis * fisvendido) + (valorquim * quimvendido) + (valorcomp * compvendido);
                printf("........................R$%.2f\n", valor_total);
                printf("=================================\n");

                printf("Digite 0 para continuar \n");

                scanf("%d", &continuar);
                break;

            case 5:
                printf("                     .----.\n");
                printf("   .----------.      | == |\n");
                printf("  | .--------. |     |----|\n");
                printf("  | |        | |     | == |\n");
                printf("  | |  BYE!  | |     |----|\n");
                printf("  | -.......-  |     |::::|\n");
                printf("   ---)---(---       |___.|\n");
                printf("  /:::::::::::\\ _  \n");
                printf(" /:::=======:::\\`\\`\\ \n");
                printf(" `=============  '-'\n");
                printf("\n");

                break;

            default:
                printf("Insira uma opção válida.\n");

                printf("                      .----.\n");
                printf("   .-----------.      | == |\n");
                printf("  | .---------. |     |----|\n");
                printf("  | |  ERROR  | |     | == |\n");
                printf("  | |   404   | |     |----|\n");
                printf("  | -.........- |     |::::|\n");
                printf("   ---)-----(---      |___.|\n");
                printf("  /::::::::::::\\ _  \n");
                printf(" /:::=======::::\\`\\`\\ \n");
                printf(" `==============  '-'\n");
                printf("\n");
                printf("Digite 0 para continuar \n");
                scanf("%d", &continuar);

                break;
            }
        }
    }
}
