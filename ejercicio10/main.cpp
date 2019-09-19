#include <iostream>
using namespace std;

typedef long int tipo_Entero;

tipo_Entero LeeNumero();
tipo_Entero NumeroInvertido(tipo_Entero num);

tipo_Entero LeeNumero(){
  tipo_Entero n;
  do{
    cout <<"Numero de por lo menos 7 digitos: ";
    cin>>n;
  }while(n<1000000);
  return n;
}

tipo_Entero NumeroInvertido(tipo_Entero num){

  tipo_Entero numeroAlReves, digito;

  numeroAlReves=0;
  while(num>0)
  {
    digito = num%10;
    numeroAlReves = numeroAlReves*10 + digito;
    num/=10;
  }
return numeroAlReves;
}

int main(){
  tipo_Entero numero;

  numero=LeeNumero();
  if(numero == NumeroInvertido(numero))
    cout<<"Es capicua";
  else
    cout<<"No es capicua";
  return 0;
}
