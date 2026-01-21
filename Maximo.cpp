#include<iostream>
using namespace std;
int* maximo(int&,int&);
int main(){
    int a=5;
    int b=8;
    int* p=maximo(a,b);
    cout<<"Valor mayor: "<<*p;
    return 0;
}
int* maximo(int& x,int& y){
    if(x<y){
        return &y;
    }
    return &x;
}