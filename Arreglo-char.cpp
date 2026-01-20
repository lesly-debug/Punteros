#include<iostream>
using namespace std;
int main(){//conversion explicita
    char mensaje[]="Hola";
    char* ptr=&mensaje[0];
    while(*ptr!='\0'){
        cout<<*ptr<<" Direccion: "<<(void*)ptr<<endl;
        ptr=ptr+1;
    }
}