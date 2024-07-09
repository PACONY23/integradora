#include<iostream>
using namespace std;

static float suma(float n1, float n2);
static float resta(float n1, float n2);
static float multipicar(float n1, float n2);
static float division(float n1, float n2);
static float verifica_div(float n1);
static void menu(int numero);
float n1,n2;
int main(){
    
    cout<<"Dame dos numeros"<<endl;
    cout<<"Numero 1: ";cin>>n1;
    cout<<"Numero 2: ";cin>>n2;

    return 0;
}
static float suma(float n1,float n2){
    return n1 + n2;
}
static float resta(float n1, float n2){
    return n1 -n2;    
}
static float multipicar(float n1, float n2){
    return n1 * n2;    
}
static float division(float n1, float n2){
    return verifica_div(n1) / n2;
}
static float verifica_div(float n1){
    while (n1 < 0)
    {
        cout<<"Dame otro numero, np puedo dividir entre 0"<<endl;
        cout<<"Nuevo numero: ";cin>>n1;
    }
    return n1;
}
static void menu(int numero){
    switch (numero)
    {
    case 1:
        suma(n1 , n2);
        break;
    
    default:
        break;
    }
}