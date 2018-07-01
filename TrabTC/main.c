#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 50

void menu()
{
    puts("---------------");
    puts(" 1 - StartsWith");
    puts(" 2 - EndsWith");
    puts(" 3 - Substring");
    puts(" 4 - Sair");
    puts("---------------");
}

void startsWith(char fita[], char prefixo[])
{
    int i = 0, contador = 0, tam = strlen(prefixo) -1;

    for(; i < tam; i++){
        if(prefixo[i] == fita[i]){
            contador++;
        }
    }
    if(contador == tam){
        puts("True");
        return;
    }
    else{
        puts("False");
        return;
    }
}

void endsWith(char fita[], char sufixo[])
{
    int i = strlen(sufixo) - 1, contador = 0, aux = strlen(fita) - 1;

    for(; i > 0; i--){
        if(sufixo[i] == fita[aux]){
            contador++;
            aux--;
        }
    }
    if(contador == strlen(sufixo) - 1){
        puts("True");
        return;
    }
    else{
        puts("False");
        return;
    }
}

void substring(char fita[], char substring[])
{
    int i = 0, j = 0, tamFita = strlen(fita) - 1, tamSub = strlen(substring) - 1;

    for(; i < tamFita - tamSub + 1; i++){
        for(; j < tamSub; j++){
            if(fita[i + j] == substring[j]){
                if(j == tamSub-1){
                    puts("True");
                    return;
                }
            }
            else{
                break;
            }
        }
    }
    puts("False");
    return;
}

int main()
{
    char fita[SIZE], ler[SIZE];
    int op;

    menu();

    do{
        printf("Digite uma opcao: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                getchar();
                printf("Digite a fita: ");
                fgets(fita, SIZE, stdin);
                printf("Digite o prefixo a ser verificado: ");
                fgets(ler, SIZE, stdin);
                startsWith(fita, ler);
                break;
            case 2:
                getchar();
                printf("Digite a fita: ");
                fgets(fita, SIZE, stdin);
                printf("Digite o sufixo a ser verificado: ");
                fgets(ler, SIZE, stdin);
                endsWith(fita, ler);
                break;
            case 3:
                getchar();
                printf("Digite a fita: ");
                fgets(fita, SIZE, stdin);
                printf("Digite a substring a ser verificado: ");
                fgets(ler, SIZE, stdin);
                substring(fita, ler);
                break;
            case 4:
                puts("Saindo...");
                break;
            default:
                puts("Opcao invalida!");
                break;
        }
    }while(op >= 1 && op < 4);

    return(EXIT_SUCCESS);
}

