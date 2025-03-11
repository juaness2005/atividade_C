#include <iostream>

using namespace std;

int main()
{
    int i, k, numero;
    
    cout << "Digite o número N do tabuleiro N x N: ";
    cin >> numero;
    
    for (i=1; i<=numero; i++){
        for(k=1 ; k<=numero; k++){
            cout << " - ";
        }
        cout << endl;
    }

    return 0;
}