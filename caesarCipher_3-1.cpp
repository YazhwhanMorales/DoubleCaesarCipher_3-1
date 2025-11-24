#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cifrado[]= "Vpop md";
    int longitud;
    cout << "Frase cifrada con Cesar doble (+3/+1)"<< cifrado<<endl;
    longitud = strlen(cifrado);
    cout<< "Longitud de la frase: "<<longitud;

return 0;
}