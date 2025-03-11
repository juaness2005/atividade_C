#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, k, numero, limite = 1;
    
    cout << "Digite o número N do tabuleiro N x N: ";
    cin >> numero;
    
    cout << "Digite o número inicial do tabuleiro: ";
    cin >> limite;

    
    for (i=1; i<=numero; i++){
        for(k=1 ; k<=numero; k++){
            cout << setw(4) <<limite;
            limite++;
        }
        cout << endl;
    }

    return 0;
}
