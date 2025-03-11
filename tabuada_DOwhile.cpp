#include <iostream>

using namespace std;

int main()
{
    int num, limite, aux=0;

    cout << "Tabuada do numero: ";
    cin >> num;
    
    cout << "Insira um limite: ";
    cin >> limite;

    do{
        cout<<num<<" * "<<aux<<" = " << num*aux <<endl;
        aux++;
    }
    while(aux<=limite);
        

    return 0;
}
