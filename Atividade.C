#include <stdio.h>

int main() {
    double QTD[10];

    // Solicita os valores para o array
    printf("Digite 10 valores:\n");
    for (int a = 0; a < 10; ++a) {
        scanf("%lf", &QTD[a]);

        // Ordena o array até a posição 'a'
        for (int b = 0; b < a; ++b) {
            if (QTD[a] < QTD[b]) {
                double temp = QTD[b];
                QTD[b] = QTD[a];
                QTD[a] = temp;
            }
        }
    }

    // Exibe os valores ordenados
    printf("Valores ordenados:\n");
    for (int g = 0; g < 10; ++g) {
        printf("%f\n", QTD[g]);
    }

    return 0;
}