#include<iostream>
using namespace std;
int main(){
    int A[]={1,2,3,4};
    int n=sizeof(A)/sizeof(A[0]);
    int* ptr=&A[0];
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
    return 0;
}