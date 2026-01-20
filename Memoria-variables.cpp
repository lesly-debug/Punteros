#include<iostream>
using namespace std;
int main(){
    int a=4;
    int* ptr=&a;
    cout<<"Valor de a: "<<a<<endl;
    cout<<"Direccion de a: "<<&a<<endl;
    cout<<"Valor desde el puntero: "<<*ptr;
    return 0;
}