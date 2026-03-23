#include <stdio.h>

int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);

struct Operacao
{
    char op;
    int (*func)(int, int);
};

struct Operacao operacoes[] = {
    {'+', somar},
    {'-', subtrair},
    {'*', multiplicar},
    {'/', dividir}};

int main()
{
    printf("-=-=-=-=-=--=-=-=-=-=-=\n Bem vindo a sua Calculadora ! \n-=-=-=-=-=--=-=-=-=-=-=\n");

    char linha[100];
    int valor_a, valor_b;
    char op;
    int sair = 0;

    while (!sair)
    {
        printf("Digite a operacao (ex: 5 + 3) ou 's' para sair: ");
        fgets(linha, sizeof(linha), stdin);

        if (linha[0] == 's' || linha[0] == 'S')
        {
            sair = 1;
            printf("Saindo da calculadora. Obrigado por usar!\n");
            break;
        }

        if (sscanf(linha, "%d %c %d", &valor_a, &op, &valor_b) != 3)
        {
            printf("Entrada invalida! Tente novamente.\n");
            continue;
        }

        int encontrou = 0;

        if (op == 's' || op == 'S')
        {
            sair = 1;
            printf("Saindo da calculadora. Obrigado por usar!\n");
            break;
        }

        for (int i = 0; i < sizeof(operacoes) / sizeof(operacoes[0]); i++)
        {
            if (operacoes[i].op == op)
            {
                int resultado = operacoes[i].func(valor_a, valor_b);
                printf("Resultado: %d\n", resultado);
                encontrou = 1;
                break;
            }
        }
        if (!encontrou)
        {
            printf("Operacao invalida!\n");
        }
    }
    return 0;
}

int somar(int a, int b)
{
    int resultado = a + b;
    return resultado;
}

int subtrair(int a, int b)
{
    int resultado = a - b;
    return resultado;
}

int multiplicar(int a, int b)
{
    int resultado = 0;

    if (a == 0 || b == 0)
    {
        return 0; // Multiplicação por zero resulta em zero
    }

    int negativo = (a < 0) ^ (b < 0);

    a = a < 0 ? -a : a; // Converte para positivo
    b = b < 0 ? -b : b; // Converte para positivo

    for (int i = 0; i < b; i++)
    {
        resultado += a;
    }

    if (negativo)
    {
        resultado = -resultado; // Aplica o sinal negativo se necessário
    }

    return resultado;
}

int dividir(int a, int b)
{
    int resultado = 0;

    if (b == 0)
    {
        printf("Erro: Divisao por zero nao e permitida!\n");
        return 0; // Retorna 0 ou algum valor de erro
    }

    int negativo = (a < 0) ^ (b < 0);

    a = a < 0 ? -a : a; // Converte para positivo
    b = b < 0 ? -b : b; // Converte para positivo
    while (a >= b)
    {
        a -= b;
        resultado++;
    }

    if (negativo)
    {
        resultado = -resultado; // Aplica o sinal negativo se necessário
    }
    return resultado;
}