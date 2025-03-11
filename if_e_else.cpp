#include <iostream>

using namespace std;

int main (){
    
    int senha=1234, senhaDigitada;
    
    cout << "Digite a senha: ";
    cin >> senhaDigitada;
    
    if(senhaDigitada == senha){
        cout << "Login realizado com sucesso!";
    }
    else{
        cout << "Senha inválida!";
    }
    
    return 0;
}