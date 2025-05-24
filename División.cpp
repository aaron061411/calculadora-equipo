#include <iostream>
using namespace std; 



void calc (){
     int num1;
     int num2;

    cout << "Digite el numero a dividir" << endl; 
    cin>> num1;
    cout << "Digite el segundo numero a dividir" << endl; 
    cin >> num2;
  
    if (num2 ==0){
    cout << "error, division por cero." << endl;
    } else {
       cout << "el resultado de la multiplicacion es:" << num1 / num2 << endl; 
    }
}