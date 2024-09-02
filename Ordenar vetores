#include <stdio.h>

int main() {
    double QTD[10];

    printf("Digite 10 valores:\n");
    for (int a = 0; a < 10; ++a) {
        scanf("%lf", &QTD[a]);

        for (int b = 0; b < a; ++b) {
            if (QTD[a] < QTD[b]) {
                double temp = QTD[b];
                QTD[b] = QTD[a];
                QTD[a] = temp;
            }
        }
    }
    printf("Valores ordenados:\n");
    for (int g = 0; g < 10; ++g) {
        printf("%f\n", QTD[g]);
    }

    return 0;
}
