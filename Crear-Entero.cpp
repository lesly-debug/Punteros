#include<iostream>
using namespace std;
int* crearEntero(int&);
int main(){
    int x=10;
    int* p=crearEntero(x);
    cout<<*p;
    return 0;
}
int* crearEntero(int& x){
    x=42;
    return &x;
}