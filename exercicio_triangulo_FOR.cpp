#include <iostream>

using namespace std;

int main()
{
    int i, k, j, numero;
    
    cout << "Digite o tamanho do triângulo (n° de linhas): ";
    cin >> numero;
    
    for (i=1; i<=numero; i++){
        
       for (j = 1; j <= numero - i; j++) {
            cout << " ";
        }
        
        for(k=1 ; k <= 2*i-1; k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}