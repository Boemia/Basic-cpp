#include <iostream>
 
using namespace std;

int n1, n2; //Variáveis Globais.

int main(){

    int n3, n4; //Variáveis Locais.
    int res;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;
    
    res = (n1+n2+n3+n4)-7;

    cout << "A soma das variaveis: " << res << "\n";

    system("pause");
    return 0;
}