#include <iostream>
using namespace std;

int main() {
    int num, limite, aux = 0 ;
    
    cout << "Insira um número: ";
    cin >> num;
    
    cout << "Qual o limite? ";
    cin >> limite;
    
    for(aux=0 ; aux <= limite ; aux++){
    cout << num << "x" << aux << "=" <<   num * aux << endl;

    }

    return 0;
}

