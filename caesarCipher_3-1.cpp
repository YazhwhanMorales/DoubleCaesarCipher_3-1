#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char cifrado[]= "Vpop md";
    int longitud = strlen(cifrado);

    cout << "Frase cifrada con Cesar doble (+3/+1): "<< cifrado<<endl;
    
    for(int i=0; i<longitud; i++){
        if (cifrado[i] == ' '){
            continue;
        }
        else{
            //el 0 cuenta como par, por lo que a las pocisiones pares les restaremos 3 para modificar su ASCII 
            // a las posiciones impares les restamos 1 para asi cumplir correctamente con la alternacion del cifrado.
            if (i % 2 == 0) {
            cifrado[i] -= 3;
            } else {
            cifrado[i] -= 1;
            } 
        }
    }
    cout<< "Frase descifrada: "<< cifrado<< endl;

return 0;
}