#include <iostream>

using namespace std;

int main()
{
    int numero, auxiliar, soma=0;
    
    cout << "Digite um número para somatória: ";
    cin >> numero;
    
    while(auxiliar<=numero){
        soma += auxiliar;
        auxiliar++
    }
    
    cout << "somatória do número " << numero <<  " é: " << soma;
        

    return 0;
}
