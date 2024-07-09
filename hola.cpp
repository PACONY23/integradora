#include<iostream>
using namespace std;

static int suma(int n1, int n2);

int main(){
    cout<<"Hola mundo"<<" ESta es la suma: "; 
    cout<<suma(10,20);
    return 0;
}
static int suma(int n1,int n2){
return n1 + n2;
}