#include <iostream>
using namespace std;

int main(){
  int numero, i;
  a:
  cout << "Ingrese la cantidad de asteriscos: \n";
  cin >> numero;  

  if (numero<10 || numero >30){
    cout << "Cantidad fuera de rango. \n";
    cout << "\n";

    goto a;
  }

  for (i=1; i<=numero; i++){
    cout << "*";
  }
  return 0;
}
