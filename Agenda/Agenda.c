#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50

typedef struct Pessoa
{
    char nome[MAX_NOME];
    int idade;
    char telefone[12]; // Adicionado espaço para o caractere nulo
} Pessoa;

int compararPessoas(const void *p1, const void *p2) {
    const Pessoa *pessoa1 = (const Pessoa *) p1;
    const Pessoa *pessoa2 = (const Pessoa *) p2;
    return strcmp(pessoa1->nome, pessoa2->nome);
}
int main()
{
    
    Pessoa *agenda = NULL;
    int numPessoas = 0;
    while (1)
    {
        printf("\nMENU\n");
        printf("----\n");
        printf("1 - Adicionar pessoa\n");
        printf("2 - Remover pessoa\n");
        printf("3 - Buscar pessoa\n");
        printf("4 - Listar pessoas\n");
        printf("5 - Sair\n");
        printf("Opcao: ");

        int opcao;
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: // adicionar pessoa
    numPessoas++;

    Pessoa *novaPessoa = (Pessoa *)realloc(agenda, numPessoas * sizeof(Pessoa));
    if (novaPessoa == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    agenda = novaPessoa;

    Pessoa *pessoa = &agenda[numPessoas - 1];

    printf("Nome: ");
    scanf("%s", pessoa->nome);

    printf("Idade: ");
    scanf("%d", &pessoa->idade);

    printf("Telefone: ");
    scanf("%s", pessoa->telefone);

    // Adiciona a nova pessoa à heap e reordena
    qsort(agenda, numPessoas, sizeof(Pessoa), compararPessoas);

    printf("Pessoa adicionada com sucesso!\n");
    break;
        case 2: // remover pessoa
            if (numPessoas > 0)
            {
                char nome[MAX_NOME];
                printf("Nome da pessoa a ser removida: ");
                scanf("%s", nome);

                int indice = -1;
                for (int i = 0; i < numPessoas; i++)
                {
                    if (strcmp(agenda[i].nome, nome) == 0)
                    {
                        indice = i;
                        break;
                    }
                }

                if (indice != -1)
                {
                    numPessoas--;
                    if (numPessoas > 0 && indice < numPessoas)
                    {
                        agenda[indice] = agenda[numPessoas];
                    }
                    Pessoa *novaAgenda = (Pessoa *)realloc(agenda, numPessoas * sizeof(Pessoa));
                    if (novaAgenda == NULL)
                    {
                        printf("Erro ao alocar memoria!\n");
                        return 1;
                    }
                    agenda = novaAgenda;
                    printf("Pessoa removida com sucesso!\n");
                }
                else
                {
                    printf("Pessoa nao encontrada!\n");
                }
            }
            else
            {
                printf("Agenda vazia!\n");
            }
            break;

        case 3: // buscar pessoa
            if (numPessoas > 0)
            {
                char nome[MAX_NOME];
                printf("Nome da pessoa a ser buscada: ");
                scanf("%s", nome);

                int encontrado = 0;
                for (int i = 0; i < numPessoas; i++)
                {
                    if (strcmp(agenda[i].nome, nome) == 0)
                    {
                        printf("Nome: %s\n", agenda[i].nome);
                        printf("Idade: %d\n", agenda[i].idade);
                        printf("Telefone: %s\n", agenda[i].telefone);
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado)
                {
                    printf("Pessoa nao encontrada!\n");
                }
            }
            else
            {
                printf("Agenda vazia!\n");
            }
            break;

case 4: // listar pessoas
    if (numPessoas > 0)
    {
        printf("Listando pessoas:\n");
        for (int i = 0; i < numPessoas; i++)
        {
            printf("Nome: %s\n", agenda[i].nome);
            printf("Idade: %d\n", agenda[i].idade);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("\n");
        }
    }
    else
    {
        printf("Agenda vazia!\n");
    }
    break;
        case 5: // sair
            free(agenda);
            printf("Ate mais!\n");
            return 0;

        default:
            printf("Opcao invalida!\n");
        }
    }
}
