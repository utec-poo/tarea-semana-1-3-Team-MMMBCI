#include <iostream>
using namespace std;

int main(){
  int numero, i;
  
  cout << "Ingrese la cantidad de asteriscos: \n";
  cin >> numero;

  for (i=1; i<=numero; i++){
    cout << "*";
  }
  return 0;
}
