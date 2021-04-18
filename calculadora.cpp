#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int opcao = 3;
    int decimal = 0;
    int binario = 0;
    int resto = 0;
    int contador = 0;
    int resultadoBinario[7];

       cout << "Conversor";

    while( opcao != 0 ) {

        cout << "\n\n Digite o numero da opcao desejada  \n";
        cout << "1. Converter binario para decimal. \n";
        cout << "2. Converter decimal para binario. \n";
        cout << "0. Sair do conversor \n";

        cin >> opcao;

        if (opcao == 1) {
            cout << " Binario para decimal \n";
            cout << " Digite um valor binario: \n";
            cin >> binario;
            cout << binario;

            decimal = 0;
            for (contador = 0; binario > 0; contador++) {
                 decimal = decimal + pow(2, contador) * (binario % 10);
                 binario = (binario / 10);
            }
            cout << " convertido para decimal é: ";
            cout << decimal;
            cout << "\n\nDeseja fazer uma nova operacao?\n";
        }

            if (opcao == 2) {
            cout << "Decimal para binario \n";
            cout << "Digite um valor decimal: \n";

            cin >> decimal;
            cout << decimal;

            for (contador = 7; contador >= 0; contador -- ) {
                resto  = (decimal % 2);
                decimal = (decimal / 2);
                resultadoBinario[contador] = resto;
            }
            cout << " convertido para binário é: ";
            for(contador = 0; contador <= 7; contador ++ ) {
                cout << resultadoBinario[contador];
                            }
                cout << "\n\nDeseja fazer uma nova operacao?\n";
        }

        if (opcao < 0 || opcao > 2) {
            cout << opcao;
            cout << " é uma opcao invalida! \n";
        }
    }


        cout << "Voce saiu do programa! \n\n\n";
}
