#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Definição das variáveis para armazenar as propriedades das cidades
// Você pode utilizar o código do primeiro desafio

// variaveis que receberam os valores passados pelo usuário
char cidade_1[20], cidade_2[20], codigo_1[20], codigo_2[20], estado_1, estado_2;
int nPontosTuristicos_1, nPontosTuristicos_2, populacao_1, populacao_2;
float area_1, area_2, densidadePopula_1, densidadePopula_2, superPoder_1, superPoder_2, PIB_percap_1, PIB_percap_2;
unsigned long int PIB_1, PIB_2;


// Cadastro das Cartas:
// Implemente a lógica para solicitar ao usuário que insira os dados das cidades
// utilizando a função scanf para capturar as entradas.
// utilize o código do primeiro desafio

void cadastrarCartas()
{
    // Cadastro da primeira CARTA
    printf("Vamos começar o cadastro das cartas. Digite os dados da primeira carta.\n");
    printf("*********************CARTA 1*********************************\n");

    printf("Vamos começar o cadastro das cartas. Digite os dados da primeira carta.\n");
    printf("Nome da Cidade:\n");
    scanf("%s", &cidade_1);

    printf("Digite o código da primeira carta: Ex: A01, B05...\n");
    scanf("%s", &codigo_1);

    printf("Digite o estado da primeira carta: Ex: A, B...\n");
    scanf(" %c", &estado_1);

    printf("Digite a população da primeira carta:\n");
    scanf("%d", &populacao_1);

    printf("Digite a Área da primeira carta:\n");
    scanf("%f", &area_1);

    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &PIB_1);

    printf("Digite o número de Pontos Turisticos da primeira carta:\n");
    scanf("%d", &nPontosTuristicos_1);

    printf("*********************CARTA 2*********************************\n");
    printf("Vamos cadastrar a segunda carta.\n");
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade_2);

    printf("Digite o código da segunda carta: Ex: A01, B05...\n");
    scanf("%s", &codigo_2);

    printf("Digite o estado da segunda carta: Ex: A, B...\n");
    scanf(" %c", &estado_2);

    printf("Digite a população da segunda carta:\n");
    scanf("%d", &populacao_2);

    printf("Digite a Área da segunda carta:\n");
    scanf("%f", &area_2);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &PIB_2);

    printf("Digite o número de Pontos Turisticos da segunda carta:\n");
    scanf("%d", &nPontosTuristicos_2);
}

float calculorDados()
{
    // carta um
    densidadePopula_1 = (float)(populacao_1 / area_1);
    printf("Dencidade Populacional: %f hab/km²\n", densidadePopula_1);

    PIB_percap_1 = (float)(PIB_1 / populacao_1);
    printf("PIB per capita: %.7f reais\n", (float)PIB_percap_1);

    superPoder_1 = (float)(populacao_1 + area_1 + PIB_1 + nPontosTuristicos_1 + PIB_percap_1 / 2);
    printf("Super Poder: %f", (float)superPoder_1);

    // carta dois
    densidadePopula_2 = (float)(populacao_2 / area_2);
    printf("Dencidade Populacional: %f hab/km²\n", densidadePopula_2);

    PIB_percap_2 = (float)(PIB_2 / populacao_2);
    printf("PIB per capita: %.7f reais\n", (float)PIB_percap_2);

    superPoder_2 = (float)(populacao_2 + area_2 + PIB_2 + nPontosTuristicos_2 + PIB_percap_2 / 2);
    printf("Super Poder: %f", (float)superPoder_2);
}

// Comparação de Cartas:
// Desenvolva a lógica de comparação entre duas cartas.
// Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

// Exibição dos Resultados:
// Após realizar as comparações, exiba os resultados para o usuário.
// Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
void exiberCartas()
{
    // Dados das cartas
    printf("********************************************************\n");
    printf("DADOS DA CARTA 1:\n");
    printf("Cidade: %s\n\n", cidade_1);
    printf("Código da carta: %s\n\n", codigo_1);
    printf("Estado: %c\n\n", estado_1);
    printf("População: %.2d Habitantes\n\n", populacao_1);
    printf("Área: %.2f km²\n\n", area_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopula_1);
    printf("PIB: %lu Bilhões de reais\n\n", (int)PIB_1);
    printf("PIB per Capita: %.2f reais\n", (float)PIB_percap_1);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos_1);
    printf("Super Poder: %.2f\n\n", superPoder_1);

    printf("********************************************************\n");
    printf("DADOS DA CARTA 2:\n");
    printf("Cidade: %s\n\n", cidade_2);
    printf("Código da carta: %s\n\n", codigo_2);
    printf("Estado: %c\n\n", estado_2);
    printf("População: %.2d Habitantes\n\n", populacao_2);
    printf("Área: %.2f km²\n\n", area_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopula_2);
    printf("PIB: %lu Bilhões de reais\n\n", (int)PIB_2);
    printf("PIB per Capita: %.2f reais\n", (float)PIB_percap_2);
    printf("Número de Pontos Turísticos: %d\n\n", nPontosTuristicos_2);
    printf("Super Poder: %.5f\n\n", superPoder_2);
}

int main()
{
    int escolhaMenu;

    printf("******SUPER TRUNFO*****\n");
    printf("Menu - Escolha uma opção:\n");
    printf("1. Jogar\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair\n");
    printf("Escolha: \n");
    scanf("%d", &escolhaMenu);

    switch (escolhaMenu)
    {
    case 1:
        cadastrarCartas();
        calculorDados();
        exiberCartas();

        if (populacao_1 > populacao_2)
        {
            printf("(☞ﾟヮﾟ)☞ ### VAMOS A COMPARAÇÃO DAS CARTAS ### ☜(ﾟヮﾟ☜)");
            printf("Carta 1 tem a maior população.\n");
            printf("%s ganhou! ☜(ﾟヮﾟ☜)\n\n", cidade_1);
        }
        else
        {
            printf("Carta 2 tem a maior população.\n");
            printf("%s ganhou! (☞ﾟヮﾟ)☞\n\n", cidade_2);
        }

        if (area_1 > area_2)
        {
            printf("Carta 1 tem a maior área.\n");
            printf("%s ganhou! ☜(ﾟヮﾟ☜)\n\n", cidade_1);
        }
        else
        {
            printf("Carta 2 tem a maior área.\n");
            printf("%s ganhou! (☞ﾟヮﾟ)☞\n\n", cidade_2);
        }

        if (densidadePopula_1 < densidadePopula_2)
        {
            printf("Carta 1 tem a menor denaidade populacional.\n");
            printf("%s ganhou! ☜(ﾟヮﾟ☜)\n\n", cidade_1);
        }
        else
        {
            printf("Carta 2 tem a menor densidade populacional.\n");
            printf("%s ganhou! (☞ﾟヮﾟ)☞\n\n", cidade_2);
        }

        if (PIB_1 > PIB_2)
        {
            printf("Carta 1 tem o PIB maior.\n");
            printf("%s ganhou! ☜(ﾟヮﾟ☜)\n\n", cidade_1);
        }
        else
        {
            printf("Carta 2 tem o PIB maior.\n");
            printf("%s ganhou! (☞ﾟヮﾟ)☞\n\n", cidade_2);
        }

        if (PIB_percap_1 > PIB_percap_2)
        {
            printf("Carta 1 tem o PIB per capita maior.\n");
            printf("%s ganhou! ☜(ﾟヮﾟ☜)\n\n", cidade_1);
        }
        else
        {
            printf("Carta 2 tem o PIB per capita maior.\n");
            printf("%s ganhou! (☞ﾟヮﾟ)☞\n\n", cidade_2);
        }

        if (nPontosTuristicos_1 > nPontosTuristicos_2)
        {
            printf("Carta 1 tem mais pontos turisticos.\n");
            printf("%s ganhou! ☜(ﾟヮﾟ☜)\n\n", cidade_1);
        }
        else
        {
            printf("Carta 2 tem mais pontos turisticos.\n");
            printf("%s ganhou! (☞ﾟヮﾟ)☞\n\n", cidade_2);
        }

        if (superPoder_1 > superPoder_2)
        {
            printf("Carta 1 tem mais Super poder.\n");
            printf("%s ganhou! ☜(ﾟヮﾟ☜)\n\n", cidade_1);
        }
        else
        {
            printf("Carta 2 tem mais Super poder.\n");
            printf("%s ganhou! (☞ﾟヮﾟ)☞\n\n", cidade_2);
        }
        break;
    case 2:
        printf("Regras do jogo:\nCada jogador recebe uma carta para que será compare com a de outro jogador.\nTodos os atributos da carta (como população, área, PIB) serão comparados e o jogar com a melhor carta ganha.");
        break;
    case 3:
        printf("Você saiu do jogo");
        break;
    default:
        printf("Opção invalida\n");
        break;
    }
    return 0;
}