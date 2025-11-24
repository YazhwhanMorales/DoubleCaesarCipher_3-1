#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cifrado[]= "Vpop md";
    int longitud;
    cout << "Frase cifrada con Cesar doble (+3/+1)"<< cifrado<<endl;
    longitud = strlen(cifrado);
    cout<< "Longitud de la frase: "<<longitud<<endl;
    for(int i=0; i<longitud; i++){
        if (cifrado[i] == ' '){
            i++;
        }
        else{
          cifrado[i]-=3;
        i++;
        cifrado[i]-=1;  
        }
    }
    cout<< "Frase descifrada: "<< endl;
    cout<< cifrado<< endl;

return 0;
}