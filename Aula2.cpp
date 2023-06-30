#include <iostream>

using namespace std;

int main(){

    int vidas = 0;
    //char //letra='B'; //Uma letra, ex. 'B'; se utilizar '[*número*]', pode aumentar o número de letras;
    double decimal = 5.1; //ex. 2,5;
    float decimal2 = 5.2; //menos preciso;
    bool vivo = true; //true/false;
    string nome = "Gabriel";

    cout << vidas << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";


    int seunumero = 0;
    cout << "Insira um numero: ";
    cin >> seunumero;
    cout << "Seu numero e " << seunumero;

    system("pause");
    return 0;
}