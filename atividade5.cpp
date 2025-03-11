#include <iostream>
using namespace std;

int main (){
    float idade, ano, nascimento;
    
    cout << "Digite o ano atual: ";
    cin >> ano;
    
    cout << "Digite a sua idade atual: ";
    cin >> idade;
    
    nascimento = ano - idade;
    
    cout << "O ano que você nasceu é: " <<nascimento << endl;
   
    
    return 0;
    
}