#include<iostream>
using namespace std;
void incrementar(int*);
int main(){
    int x=5;
    int* p=&x;
    incrementar(p);
    cout<<*p;
    return 0;
}
void incrementar(int* p){
    *p=*p+1;
}