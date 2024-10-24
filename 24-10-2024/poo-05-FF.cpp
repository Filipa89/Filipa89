#include <iostream>

using namespace std;

class outraClasse {
    public:
        int xInteiro;
        string sString;
};

int main(){
    outraClasse outro_objeto;
    cout << sizeof(outro_objeto.xInteiro) <<endl;
    cout << sizeof(outro_objeto.sString) <<endl;
    cout << sizeof(outro_objeto) <<endl;
    return 0;
}