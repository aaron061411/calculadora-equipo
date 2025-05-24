#include <iostream>
using namespace std; 



void calc (){
     int num1;
     int num2;

    cout << "primer numero a Sumar" << endl; 
    cin>> num1;
    cout << "segundo numero a Sumar" << endl; 
    cin >> num2;
    
    cout << "El resultado de la Suma es:" << num1 + num2 << endl; 
}


int main(){
    
    calc ();

    return 0;
}