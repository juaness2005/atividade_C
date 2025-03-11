#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    float hora, minuto, totalMinutos, totalSegundos;
    
    cout << "Digite a hora no formato hh:mm: ";
    scanf ("%d:%d", &hora, &minuto);
    
    totalMinutos = (hora * 60) + minuto;
    totalSegundos = totalMinutos * 60;
    
    cout << "Total em minutos: " << totalMinutos << " minutos" << endl;
    cout << "Total em segundos: " << totalSegundos << " segundos" << endl;
    
    return 0;
    
}