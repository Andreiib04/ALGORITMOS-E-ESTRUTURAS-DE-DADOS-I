#include <stdio.h>


int main() {
    int n;
    printf("Digite o numero de degraus: ");
    scanf("%d", &n);
    printf("Possbilidades: %d\n\n", NumDegrais(n));
    return 0;
}
int NumDegrais(int n) {
    int degraus[n+1];
        degraus[0] = 1;
        degraus[1] = 1;

    for (int i = 2; i <= n; i++) {
        degraus[i] = degraus[i-1] + degraus[i-2];
    }
    return degraus[n];
}