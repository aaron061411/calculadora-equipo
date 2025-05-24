#include<iostream>
#include <windows.h>

using namespace std;

void calc (){

     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "-----CALCULADORA-----" << endl; 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);






      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
           cout << "-----Gracias por usar la calculadora-----";
           SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

}
int main (){
   
    calc();
     return 0;
}
