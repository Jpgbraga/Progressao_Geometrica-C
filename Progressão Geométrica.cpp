#include <stdio.h>
#include <math.h>

int main() {
    double a1, q;
    int n;

    printf("Digite o primeiro termo (a1): ");
    scanf("%lf", &a1);
    printf("Digite a razao (q): ");
    scanf("%lf", &q);
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("Sua P.G. e: ");
    for (int i = 0; i < n; i++) {
        double termo = a1 * pow(q, i);
        printf("%.2f ", termo);
    }
    printf("\n");
    return 0;
}
