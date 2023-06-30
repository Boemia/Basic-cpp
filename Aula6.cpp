#include <iostream>

using namespace std;

int main(){

    int num = 0;
    //char opc = "s";

    cout << "\n" << "Insira um numero >= 0 e <=20: " << "\n";
    cin >> num;

    if(num >=0 && num <=20){
        if(num >= 10){
            cout << "Valor de um num maior ou = a 10." << "\n";
        }else{
            cout << "Valor de um num menor que 10." << "\n";
        }
    }else{
        cout << "Numero invalido.\n";
    }

   

    system("pause");
    return 0;
}