#include <iostream>
using namespace std;

int main(){
  char letra;
  int numero;

  cout << "Ingrese Cuadrante: \n"; cin >> letra >> numero;

  if (numero >= 1 && numero <=8 && letra >= 'a' && letra <= 'h' ){
    if (letra == 'a' || letra == 'c' || letra == 'e' || letra == 'g'){
      if (numero%2==0){
        cout << "Espacios blancos \n";
      }
      else{
        cout << "Espacios negros \n";
      }
    }
    else{
      if (numero%2==0){
        cout << "Espacios negros \n";
      }        
      else{ 
        cout << "Espacios blancos \n";
      }
    }  
  }
  else{
    cout << "El cuadrante " << letra << numero << " no existe \n";
  }
  return 0;
}
