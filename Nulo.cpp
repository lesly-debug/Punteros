#include<iostream>
using namespace std;
int main(){
    int* ptr=nullptr;
    int a=4;
    ptr=&a;
    if(ptr!=nullptr){
        cout<<*ptr;
    }else{
        cout<<"El puntero nulo no se puede desreferenciar";
    }
    return 0;
}