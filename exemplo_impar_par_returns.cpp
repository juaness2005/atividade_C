#include <iostream>
using namespace std;

 int par_impar()
 {
    int num;
    
    cout << "Digite um número: ";
    cin >> num;
    
    if(num%2 == 0){
        return 0;
    }{
        return 1;
    }
 }

int main()
{   
    if(par_impar()==0){
        cout << "É par!\n";
    }
    else{
        cout << "É impar!\n";
    }
    return 0;
}
