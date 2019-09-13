#include <iostream>
using namespace std;

int main() {

  double Claro, Precio, SuperVIP, VIP, Preferencial, General, Zona;
  int Zona;

  SuperVIP = 212.0;
  VIP = 170.0;
  Preferencial = 136.0;
  General = 59.0;

  cout << "Eres cliente de Claro: \n 1) SI \n 2) NO \n"; cin >> Claro;
  cout << "Que zona prefieres: \n 1) SuperVip \n 2) VIP \n 3) Preferencial \n 4) General \n"; cin >> Zona;

  switch(Zona){
    case 1:
      if (Claro == 1){
        Precio = SuperVIP * 0.80;
        cout << "Monto de la entrada es de: " << Precio << "\n";
      }
      else{
        Precio = SuperVIP;
        cout << "Monto de la entrada es de: " << Precio << "\n";
      }
      break;
    case 2:
      if (Claro == 1){
        Precio = VIP * 0.80;
        cout << "Monto de la entrada es de: " << Precio << "\n";
      }
      else{
        Precio = VIP;
        cout << "Monto de la entrada es de: " << Precio << "\n";
      }
      break;
    case 3:
      if (Claro == 1){
        Precio = Preferencial * 0.80;
        cout << "Monto de la entrada es de: " << Precio << "\n";
      }
      else{
        Precio = Preferencial;
        cout << "Monto de la entrada es de: " << Precio << "\n";
      }
      break;
    case 4:
      if (Claro == 1){
        Precio = General * 0.80;
        cout << "Monto de la entrada es de: " << Precio << "\n";
      }
      else{
        Precio = General;
        cout << "Monto de la entrada es de: " << Precio << "\n";
      }
      break;
    default:
      cout << "La zona: " << Zona << " ingresada no existe. \n";       
  }
  return 0;
}
