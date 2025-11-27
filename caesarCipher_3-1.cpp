// Team: Mauricio Figueroa, Yazhwhan Morales, Grace Valencia

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
            // 0 counts as even, so we subtract 3 from even positions to modify their ASCII values.
            // We subtract 1 from odd positions 
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