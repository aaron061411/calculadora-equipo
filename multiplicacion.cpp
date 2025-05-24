#include<iostream>
#include <windows.h>

using namespace std;

void multi (){
    int num1;
     int num2;

     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "-----CALCULADORA-----" << endl; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    cout << "Ingrese primer numero a multiplicar" << endl; 
    cin>> num1;
    cout << "Ingrese segundo numero a multiplicar" << endl; 
    cin >> num2;
    
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
    cout << "El resultado de la multiplicacion es: " << num1 * num2 << endl; 
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
           cout << "-----Gracias por usar la calculadora-----";
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

   
}

int main (){
   
    multi();
     return 0;
}