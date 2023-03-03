/*
Aluno: Andrei Insauriaga Bueno
Matrícula: 20202924
*/

#include <stdio.h>

int judgeCircle(char* moves){
    int x = 0, y = 0;
    for(int i = 0; moves[i] != '\0'; i++){
        if(moves[i] == 'R'){
            x++;
        }
        else if(moves[i] == 'L'){
            x--;
        }
        else if(moves[i] == 'U'){
            y++;
        }
        else if(moves[i] == 'D'){
            y--;
        }
    }
    return (x == 0 && y == 0) ? 1 : 0;
}
int main(){
    char moves[20000];
    printf("Digite a sequencia de movimento: ");
        scanf("%s", moves);
    
    int result = judgeCircle(moves);
    if(result) {
        printf("VERDADEIRO");
    }
    else {
        printf("FALSO");
    }
    return 0;
}
