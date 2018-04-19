#include <iostream>
using namespace std;

int sumar(int lista[], int tamano){
    int suma=0;
    for(int i=0; i!=tamano; i++){
        suma=suma + lista[i];
    }
    return suma;
}

int sumar_2(int lista[], int tamano){
    if (tamano==1){
        return lista[0];
    }else{
        return lista[tamano-1]+sumar_2(lista, --tamano);
    }
}

int invertir(int lista[], int tamano){
    int contador;
    for(int i=0; i!=(tamano)/2; i++){
     contador=lista[i];
     lista[i]=lista[tamano-1];
     lista[tamano-1]=contador;
    }
}

int main()
{
    /*
    int a[]={1,2,3,8};
    cout<<"La suma es: "<<sumar_2(a, sizeof(a)/sizeof(a[0]))<<endl;
    return 0;
    */
    int a[4]={1,2,3,8};
    cout<<"Normal es: "<<a<<endl;
    cout<<"Invertido es: "<<invertir(a, sizeof(a)/sizeof(a[0]))<<endl;
    return 0;
}
