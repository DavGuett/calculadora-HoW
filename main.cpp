// Calculadora de Conversão Binária HoW I
// David Jeziel de Almeida Guetten.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    bool executar = true;
    int opcao;
    int numeroDecimal = 0;
    int numeroBinario = 0;
    while (executar) {
    cout << "Bem vindo! Escolha uma opcao de conversao: " << endl;
    cout << "Opcao 1 - Conversao Decimal para Binario" << endl;
    cout << "Opcao 2 - Conversao Binario para Decimal" << endl;
    cout << "Opcao 3 - Sair" << endl;
    cin >> opcao;
    if (opcao == 1) {
        int numeroBinario[8];
        cout << "Voce escolheu fazer a conversao de decimal para binario" << endl;
        cout << "Digite o numero que deseja converter: " << endl;
        cin >> numeroDecimal;
        for(int i = 7; i >= 0; i--) {
            if(numeroDecimal % 2 == 0){
                numeroBinario[i] = 0;
            } else {
                numeroBinario[i] = 1;
            }
            numeroDecimal = numeroDecimal / 2;
        }
        cout << "O numero em binario e: ";
        for(int i = 0; i < 8; i++) {
            cout << numeroBinario[i];
        }
        cout << endl;
    } else if (opcao == 2) {
        cout << "Voce escolheu fazer a conversao de binario para decimal" << endl;
        cout << "Digite o numero que deseja converter: " << endl;
        cin >> numeroBinario;
        for (int i = 0; numeroBinario > 0; i++) {
            numeroDecimal = numeroDecimal + pow(2, i) * (numeroBinario % 10);
            numeroBinario = numeroBinario / 10;
        }
        cout << numeroDecimal << endl;
        cout << "O numero em decimal e: " << numeroDecimal << endl;
    } else if (opcao == 3) {
        cout << "Voce escolheu sair..." << endl;
        executar = false;
        exit;
    }
     else {
        cout << "Favor escolher uma opcao valida" << endl;
    }
    }
    return 0;
}
