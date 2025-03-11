#include <iostream>

using namespace std;

int main()
{
    int numero, auxiliar, soma=0;
    
    cout << "Digite um número para somatória: ";
    cin >> numero;
    
    for(auxiliar=1; auxiliar<=numero; auxiliar++){
        soma += auxiliar;
    }
    
    cout << "somatória do número " << numero <<  " é: " << soma;
        

    return 0;
}
