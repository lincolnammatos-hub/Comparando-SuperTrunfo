#include <stdio.h>

int main() {

    /// BASE DE DADOS CARTA 1 ///

    char cidade[30];
    int Pobres;
    int turistico;

    /// ENTRADA DE DADOS CARTA 1 ///

    printf("Digite a cidade: \n");
    scanf("%s", cidade);

    printf("Digite a quantidade de pobres: \n");
    scanf("%d", &Pobres);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &turistico);

    /// SAÍDA DE DADOS CARTA 1 ///
    printf("Cidade: %s \n", cidade);
    printf("Pobres: %d \n", Pobres);
    printf("Pontos turisticos: %d \n", turistico);

    /// BASE DE DADOS CARTA 2 ///

    char cidade2[30];
    int Pobres2;
    int turistico2;

    /// ENTRADA DE DADOS CARTA 2 ///

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a quantidade de pobres: \n");
    scanf("%d", &Pobres2);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &turistico2);

    /// SAÍDA DE DADOS CARTA 2 ///

    printf("Cidade: %s \n", cidade2);
    printf("Pobres: %d \n", Pobres2);
    printf("Pontos turisticos: %d \n", turistico2);

    /// COMPARAÇÃO DAS CARTAS ///
    int resultado1 = Pobres > Pobres2;
    int resultado2 = Pobres < Pobres2;

    printf("A cidade %s tem mais pobres que a cidade %s? %d \n", cidade, cidade2, resultado1);
    printf("A cidade %s tem menos pobres que a cidade %s? %d \n", cidade, cidade2, resultado2);
    
    return 0;
}
