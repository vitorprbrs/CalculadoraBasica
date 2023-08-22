#include<stdio.h>
#include<math.h>


double adicao(double num1, double num2) {
    return num1 + num2;
}

double subtracao(double num1, double num2) {
    return num1 - num2;
}

double multiplicacao(double num1, double num2) {
    return num1 * num2;
}

double divisao(double num1, double num2) {
    if (num2 == 0) {
        printf("Erro: Divisao por zero!\n");
        return 0;
    } else {
        return num1 / num2;
    }
}

int main() {
    double valor1, valor2;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &valor1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &valor2);

    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch(operacao) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", valor1, valor2, adicao(valor1, valor2));
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", valor1, valor2, subtracao(valor1, valor2));
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", valor1, valor2, multiplicacao(valor1, valor2));
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", valor1, valor2, divisao(valor1, valor2));
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}
