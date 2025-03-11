#include <iostream>
using namespace std;

 int par_impar()
 {
    int num;
    
    cout << "Digite um número: ";
    cin >> num;
    
    return num%2;
 }

int main()
{   
    if(!par_impar()){
        cout << "É par!\n";
    }
    else{
        cout << "É impar!\n";
    }
    return 0;
}
