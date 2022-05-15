// Calculadora de Convers�o Bin�ria HoW I
// David Jeziel de Almeida Guetten.

#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    bool executar = true;
    int opcao;
    int numeroDecimal = 0;
    int numeroBinario = 0;

    // Loop while para o programa continuar rodando at� o usu�rio escolher a op��o de parada
    while (executar) {
    setlocale(LC_ALL, "Portuguese");
    cout << "Bem vindo! Escolha uma op��o de convers�o: " << endl;
    cout << "Op��o 1 - Convers�o Decimal para Bin�rio" << endl;
    cout << "Op��o 2 - Convers�o Bin�rio para Decimal" << endl;
    cout << "Op��o 3 - Sair" << endl;
    cin >> opcao;
    if (opcao == 1) {
        int numeroBinario[8];
        cout << "Voce escolheu fazer a convers�o de decimal para bin�rio" << endl;
        cout << "Digite o n�mero que deseja converter: " << endl;
        cin >> numeroDecimal;

        // Loop for que roda enquanto a vari�vel i for maior ou igual a zero
        for(int i = 7; i >= 0; i--) {
            // condicional que atribui 0 ao �ndice do loop caso o decimal seja divis�vel por 2 e 1 caso contr�rio
            if(numeroDecimal % 2 == 0){
                numeroBinario[i] = 0;
            } else {
                numeroBinario[i] = 1;
            }
            numeroDecimal = numeroDecimal / 2;
        }
        cout << "O n�mero em bin�rio �: ";
        // Loop for para reconstruir o n�mero bin�rio corretamente
        for(int i = 0; i < 8; i++) {
            cout << numeroBinario[i];
        }
        cout << endl;
    } else if (opcao == 2) {
        cout << "Voce escolheu fazer a convers�o de bin�rio para decimal" << endl;
        cout << "Digite o n�mero que deseja converter: " << endl;
        cin >> numeroBinario;
        // Loop for que faz o n�mero decimal receber ele elevado a pot�ncia do seu �ndice e soma com o m�dulo de 10 do n�mero bin�rio
        for (int i = 0; numeroBinario > 0; i++) {
            numeroDecimal = numeroDecimal + pow(2, i) * (numeroBinario % 10);
            numeroBinario = numeroBinario / 10;
        }
        cout << numeroDecimal << endl;
        cout << "O n�mero em decimal �: " << numeroDecimal << endl;
    } else if (opcao == 3) {
        cout << "Voce escolheu sair..." << endl;
        executar = false;
        exit;
    }
    // Ocorre caso o usu�rio escolha uma op��o inv�lida.
     else {
        cout << "Favor escolher uma op��o v�lida" << endl;
    }
    }
    return 0;
}
