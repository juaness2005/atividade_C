#include <iostream>
using namespace std;


float soma(float num1, float num2) {
    return num1 + num2;
}

float subtracao(float num1, float num2) {
    return num1 - num2;
}

float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

float divisao(float num1, float num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Erro: Divisão por zero!" << endl;
        return 0; 
    }
}

float menu() {
    int num1, num2, operacao;

    cout << "Digite um número: " << endl;
    cin >> num1;
    
    cout << "Digite outro número: " << endl;
    cin >> num2;

    do {
        cout << "Escolha a operação: " << endl;
        cout << "0. Sair" << endl;
        cout << "1. Adição" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl;
        cin >> operacao;

        if (operacao < 0 || operacao > 4) {
            cout << "Operação inválida! Tente novamente." << endl;
        }

    } while (operacao < 0 || operacao > 4);

    switch(operacao) {
        case 1:
            cout << "Você escolheu Adição: " << soma(num1, num2) << endl;
            break;
        case 2:
            cout << "Você escolheu Subtração: " << subtracao(num1, num2) << endl;
            break;
        case 3:
            cout << "Você escolheu Multiplicação: " << multiplicacao(num1, num2) << endl;
            break;
        case 4:
            cout << "Você escolheu Divisão: " << divisao(num1, num2) << endl;
            break;
        case 0:
            cout << "Você saiu!" << endl;
            break;
        default:
            break;
    }
}


int main() {
    menu();
    return 0;
}
