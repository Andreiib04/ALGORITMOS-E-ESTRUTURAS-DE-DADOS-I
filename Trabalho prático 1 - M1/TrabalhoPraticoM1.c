/*
Aluno: Andrei Insauriaga Bueno
Matrícula: 20202924
*/
#include <stdio.h>

int judgeCircle(char* moves){
    int x = 0, y = 0;
    for (char* p = moves; *p; ++p){
        switch (*p){
            case 'R': ++x; break;
            case 'L': --x; break;
            case 'U': ++y; break;
            case 'D': --y; break;
            default: break;
        }
    }
    return (x == 0 && y == 0) ? 1 : 0;
}

int main(){
    char moves[20000];
    printf("Digite a sequencia de movimentos: ");
    scanf("%s", moves);
    int result = judgeCircle(moves);
    if (result){
        printf("VERDADEIRO");
    } else{
        printf("FALSO");
    }
    return 0;
}
