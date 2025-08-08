#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    char estado1;
    char codigoA[03];
    char cidade1[20];
    int populaçao1;
    float area1;
    float PIB1;
    int pontos1;
    float DensidadePopulacional1;
    float PIBperCapita1;
    float superPoder1;

    char estado2;
    char codigoB[03];
    char cidade2[20];
    int populaçao2;
    float area2;
    float PIB2;
    int pontos2;
    float DensidadePopulacional2;
    float PIBperCapita2;
    float superPoder2;

    int comparaçaoPopulaçao, comparaçaoArea, comparaçaoPIB, comparaçaoPontos, ComparaçaoDensidade, ComparaçaoPerCapita, ComparaçaoSuperPoder;

    printf("Carta 1:\n");
    printf("Digite o estado:");
    scanf("%c", &estado1);
    printf("Digite o código da carta: ");
    scanf("%s", &codigoA);
    printf("Digite o nome da cidade:");
    scanf("%s", &cidade1);
    printf("Digite a população: ");
    scanf("%d", &populaçao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    DensidadePopulacional1 = (populaçao1 / area1);
    PIBperCapita1 = (PIB1 * 1000000000 / populaçao1);

    printf("Densidade Populacional: %f\n", DensidadePopulacional1);
    printf("PIB per Capita %f\n", PIBperCapita1);
    printf("Super Poder: %f", &superPoder1);

    printf("Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", &codigoB);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população: ");
    scanf("%d", &populaçao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    DensidadePopulacional2 = (populaçao2 / area2);
    PIBperCapita2 = (PIB2 * 1000000000 / populaçao2);

    printf("Densidade Populacional: %f\n", DensidadePopulacional2);
    printf("PIB per Capita %f\n", PIBperCapita2);
    printf("Super Poder: %f", &superPoder2);

    superPoder1 = populaçao1 + area1 + PIB1 + pontos1 + (1 / DensidadePopulacional1);
    superPoder2 = populaçao2 + area2 + PIB2 + pontos2 + (1 / DensidadePopulacional2);

    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;

    printf("Bem vindo ao jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo){
        case 1:
            printf("Você escolheu a opção população!\n");
            resultado1 = populaçao1 > populaçao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu a opção área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu a opção PIB!\n");
            resultado1 = PIB1 > PIB2 ? 1: 0;
            break;
        case 4:
            printf("Você escolheu a opção Pontos turísticos!\n");
            resultado1 = pontos1 > pontos2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu a opção Densidade populacional!\n");
            resultado1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
            break;
        case 6: 
            printf("Você escolheu a opção PIB per Capita!\n");
            resultado1 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu o Super Poder!\n");
            resultado1 = superPoder1 > superPoder2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");                                         
    }

    printf("Escolha o segundo atributo.\n");
    printf("Você deve escolher um atributo diferente do primeiro.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");

    printf("Escolha a comparação: ");
    scanf("%d", &segundoAtributo);

    if(primeiroAtributo == segundoAtributo){
        printf("Você escolheu o mesmo atributo!\n");
    } else{
        switch(segundoAtributo){
            case 1:
            printf("Você escolheu a opção população!\n");
            resultado2 = populaçao1 > populaçao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu a opção área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu a opção PIB!\n");
            resultado2 = PIB1 > PIB2 ? 1: 0;
            break;
        case 4:
            printf("Você escolheu a opção Pontos turísticos!\n");
            resultado2 = pontos1 > pontos2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu a opção Densidade populacional!\n");
            resultado2 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0;
            break;
        case 6: 
            printf("Você escolheu a opção PIB per Capita!\n");
            resultado2 = PIBperCapita1 > PIBperCapita2 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu o Super Poder!\n");
            resultado2 = superPoder1 > superPoder2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");     
        }
        if(resultado1 && resultado2){
            printf("Parabéns, você venceu!\n");
        } else if (resultado1 != resultado2){
            printf("Empatou!\n");
        } else{
            printf("Infelizmente, você perdeu!\n");
        } 
    }

    return 0;
}
