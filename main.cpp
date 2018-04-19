#include <iostream>
using namespace std;

bool esPerfecto(int x){
  int contador=0;
  for(int i=1; i<x; i++){
    if(x%i==0){
      contador=contador+i;
    }
  }
  if (contador==x){
    return true;
  }else{
    return false;
  }
}

bool esPrimo(int x){
  int contador=0;
  for (int i=1;i<=x; i++){
    if(x%i==0){
      contador++;
    }
  }
  if(contador==2){
    return true;
  }else{
    return false;
  }
}

int potencia(int base, int exponente){
  if(exponente==0){
      return 1;
  }else{
      base=base*potencia(base, exponente-1);
      return base;
  }
}

int intercambio(int &x, int &y){
  y=y+x;
  x=y-x;
  y=y-x;


int main(){

/*
//Ejercicio1
for(int i=5; i<=10000; i++){
    if(esPerfecto(i)){
      cout<<'\t'<<i<<" : ";
      for(int j=1; j<i ;j++){
        if (i%j==0){
          cout<<j<<",";
        }
      }
    }
}
*/

/*
//Ejercicio 2
int x,n=1,contador=0;
cout<<"ingrese un numero: ",cin>>x;

while(contador!=x){
  if(esPrimo(n)){
    cout<<n<<",";
    contador++;
    n++;
  }else{
    n++;
  }
}
*/

/*
//Ejercicio 3
cout<<potencia(2,3);
*/

/*
//Ejercicio 4
int x=3, y=2;
intercambio(x,y);
cout<<"x es : "<<x<<endl;
cout<<"y es : "<<y<<endl;
*/
  return 0;
}
