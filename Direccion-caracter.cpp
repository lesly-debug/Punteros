#include<iostream>
using namespace std;
int main(){
    char mensaje[]="Hola mundo";
    char* ptr=&mensaje[0];
    while(*ptr!='\0'){
        cout<<*ptr;
        ptr=ptr+1;
    }
    return 0;
}