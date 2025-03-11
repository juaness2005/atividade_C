#include <iostream>

using namespace std;

int main()
{
    int numero, auxiliar=1, produto=1;
    
    cout << "Digite um número para fatorial: ";
    cin >> numero;
    
    do{
        produto *= auxiliar;
        auxiliar++;
    }
    
    while(auxiliar<=numero);
    
    cout << "fatorial do número " << numero <<  " é: " << produto;
        

    return 0;
}