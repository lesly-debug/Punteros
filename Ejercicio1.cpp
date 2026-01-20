#include<iostream>
using namespace std;
void imprimir(int*,int);
void duplicarArreglo(int*,int);
int main(){
    int A[]={1,3,5};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"Arreglo inicial: "<<endl;
    imprimir(&A[0],n);
    cout<<"Arreglo modificado: "<<endl;
    duplicarArreglo(&A[0],n);
    imprimir(&A[0],n);
    return 0;
}
void imprimir(int *array,int n){
    for(int i=0;i<n;i++){
        cout<<*(array+i)<<" ";
    }
    cout<<endl;
}
void duplicarArreglo(int* array,int n){
    int* arr=&array[0];
    for(int i=0;i<n;i++){
        *(arr+i)=2*(*(array+i));
    }
    for(int i=0;i<n;i++){
        int temp=*(arr+i);
        *(arr+i)=*(array+i);
        *(array+i)=temp;
    }
}