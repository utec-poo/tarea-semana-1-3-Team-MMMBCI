#include <iostream>
using namespace std;

int main(){

  int entrada, horas, minutos, segundos;

  cout << "Ingrese los segundos: \n"; cin >> entrada;

  horas = (entrada/3600);
  minutos = ((entrada - horas * 3600) / 60);
  segundos = entrada - (horas * 3600 + minutos *60);
  
  cout << "Son " << horas << " horas con "<< minutos << " minuto(s) y " << segundos << " segundos ";
  return 0;
}
