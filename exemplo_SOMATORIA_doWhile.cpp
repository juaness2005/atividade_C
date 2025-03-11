#include <iostream>

using namespace std;

int main()
{
    int numero, auxiliar=1, soma=0;
    
    cout << "Digite um número para somatória: ";
    cin >> numero;
    
    do{
        soma += auxiliar;
        auxiliar++;
    }
    
    while(auxiliar<=numero);
    
    cout << "somatória do número " << numero <<  " é: " << soma;
        

    return 0;
}
