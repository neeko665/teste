#include <stdio.h>

int main() {
    int idade, dependentes;
    float renda;

    // Entrada de dados
    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a renda mensal (em R$): ");
    scanf("%f", &renda);

    printf("Digite a quantidade de dependentes: ");
    scanf("%d", &dependentes);

    // Estrutura de decisão alinhada
    if (idade >= 18) {
        if (renda < 1500) {
            if (dependentes >= 3) {
                printf("Classificação: Baixa renda com muitos dependentes.\n");
            } else {
                printf("Classificação: Baixa renda.\n");
            }
        } else {
            if (renda < 5000) {
                if (dependentes >= 2) {
                    printf("Classificação: Classe média com dependentes.\n");
                } else {
                    printf("Classificação: Classe média.\n");
                }
            } else {
                printf("Classificação: Alta renda.\n");
            }
        }
    } else {
        printf("Classificação: Menor de idade.\n");
    }

    return 0;
}
