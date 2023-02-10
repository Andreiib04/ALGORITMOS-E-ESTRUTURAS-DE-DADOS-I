
/*  Aluno: Andrei Insauriaga  Bueno
    Matricula: 20202924
    Faça um programa para cadastrar e calcular a média de alunos, o programa deve contar as opções de adicionar, remover, reprovados e pesquisar.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ALUNOS 50

typedef struct{
    char nome[50];
    float notas[4];
    int ativo;
} Aluno;
Aluno alunos[MAX_ALUNOS];
    void menu();
    void cadastrar();
    void remover();
    void reprovados();
    void pesquisar();
    
    int main(){
        menu();
    return 0;
}
void menu(){
    int op;
    do
    {
        system("cls"); // Limpa o terminal
        printf("\n1 - Cadastrar aluno\n2 - Remover aluno \n3 - Alunos reprovados\n4 - Pesquisar alunos\n0 - Sair");
        printf("\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            remover();
            break;
        case 3:
            reprovados();
            break;
        case 4:
            pesquisar();
            break;
        default:
            break;
        }
    } while (op!=0);
}
void cadastrar(){
    char nome[50];
    float notas[4];
    int op;
    do
    {
        system("cls");
        printf("Nome: ");
        scanf(" %[^\n]s", nome);
        printf("\n1 Bimestre: \n");
        scanf("%f", &notas[0]);
        printf("\n2 Bimestre: \n");
        scanf("%f", &notas[1]);
        printf("\n3 Bimestre: \n");
        scanf("%f", &notas[2]);
        printf("\n4 Bimestre: \n");
        scanf("%f", &notas[3]);
        for (int i = 0; i < MAX_ALUNOS; i++)
        {
            if (alunos[i].ativo==0)
            {
                alunos[i].notas[0] = notas[0];
                alunos[i].notas[1] = notas[1];
                alunos[i].notas[2] = notas[2];
                alunos[i].notas[3] = notas[3];
                strcpy(alunos[i].nome, nome);
                break;
            }
        }
        printf("\n1 - para continuar\n0 Sair\n");
        scanf("%d", &op);
    } while (op!=0);
}
void remover(){
    
}
void reprovados(){
    
}
void pesquisar(){
  
}
