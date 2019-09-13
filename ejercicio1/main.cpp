
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 int base, altura;
  cout << "Ingrese la base del triangulo en centimetros: \n"; cin >> base;
  cout << "Ingrese la altura del triangulo centimetros: \n"; cin >> altura;
  cout << "El area del triangulo es de: " <<fixed<<setprecision(3)<< (base*altura)/2.0 << "cm²";
  return 0;
}
